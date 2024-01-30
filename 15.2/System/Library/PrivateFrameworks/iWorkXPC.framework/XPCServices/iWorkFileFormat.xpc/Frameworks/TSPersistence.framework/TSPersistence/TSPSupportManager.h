@class NSString, NSRecursiveLock, NSURL, NSSet, NSOperationQueue, TSPObjectContext, TSPSupportSaveOperationState, NSObject;
@protocol OS_dispatch_group;

@interface TSPSupportManager : NSObject <NSFilePresenter, TSPFileCoordinatorDelegate> {
    TSPObjectContext *_context;
    NSOperationQueue *_presentedItemQueue;
    NSRecursiveLock *_presentedSupportURLLock;
    NSURL *_presentedSupportURL;
    TSPSupportSaveOperationState *_saveOperationState;
    NSObject<OS_dispatch_group> *_pendingEndSaveGroup;
}

@property (copy) NSURL *presentedSupportURL;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultSupportDirectoryURL;
+ (id)supportBundleURLForDocumentUUID:(id)a0 delegate:(id)a1;
+ (BOOL)isSupportAtURLValid:(id)a0 documentUUID:(id)a1 versionUUID:(id)a2 documentProperties:(id *)a3;
+ (id)supportDirectoryURLWithDelegate:(id)a0 isUnique:(BOOL *)a1;
+ (void)garbageCollectDocumentSupportWithKnownDocumentUUIDs:(id)a0 delegate:(id)a1;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)presentedItemDidMoveToURL:(id)a0;
- (void)removeFilePresenter;
- (void)performReadUsingAccessor:(id /* block */)a0;
- (void)beginSaveWithDocumentUUID:(id)a0 versionUUID:(id)a1 originalURL:(id)a2 updateType:(long long)a3;
- (BOOL)writeSupportForDocumentUUID:(id)a0 error:(id *)a1 writer:(id /* block */)a2;
- (BOOL)endSaveWithSuccess:(BOOL)a0 packageWriter:(id)a1 newURL:(id *)a2 writtenPackage:(id *)a3;
- (void)updatePresentedItemURL:(id)a0;
- (BOOL)didUpdateDocumentUUIDWithOriginalDocumentProperties:(id)a0 newDocumentProperties:(id)a1 preserveOriginalDocumentSupport:(BOOL)a2 preserveShareUUID:(BOOL)a3 originalURL:(id)a4 newURL:(id *)a5 error:(id *)a6;
- (id)supportURLWithDocumentUUID:(id)a0;
- (BOOL)copyOrMoveSupportAtURL:(id)a0 originalDocumentProperties:(id)a1 toURL:(id)a2 isCopying:(BOOL)a3 newDocumentProperties:(id)a4 error:(id *)a5;

@end
