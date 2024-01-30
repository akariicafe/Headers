@class NSString, NSMutableDictionary, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface MPStoreCompletionOfferingController : NSObject <MCProfileConnectionObserver> {
    NSCache *_offeringCache;
    NSMutableDictionary *_lookupItemsByStoreLookupID;
    NSMutableDictionary *_lookupItemsByTokenID;
    unsigned long long _nextTokenID;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setWantsArtwork:(BOOL)a0;
+ (void)_getIsCMCDisabled:(BOOL *)a0 disabledReason:(id *)a1;
+ (BOOL)_isCmcEnabled;
+ (id)storeOfferingController;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_dumpCache;
- (id)_sanitizedQuery:(id)a0;
- (void)_defaultMediaLibraryDidChangeNotification:(id)a0;
- (void)_storeAccountsDidChangeNotification:(id)a0;
- (void)_onQueueClearCache;
- (id)completionOfferingForAlbumItemsQuery:(id)a0;
- (void)cancelCompletionOfferingLookup:(unsigned long long)a0;
- (void)_onQueueRemoveLookupItem:(id)a0;
- (unsigned long long)startCompletionOfferingLookupForAlbumItemsQuery:(id)a0 responseBlock:(id /* block */)a1;
- (id)_onQueueGetInsertedLookupItemForAlbumItemsQuery:(id)a0 requestAlreadyIssued:(BOOL *)a1 responseBlock:(id /* block */)a2;
- (void)_onQueueRemoveLookupItemsForStoreLookupID:(id)a0;
- (void)_onQueueCancelCompletionOfferingLookupTokenID:(unsigned long long)a0;
- (void)_onQueuePostLookupCompletedForLookupItem:(id)a0 offering:(id)a1 error:(id)a2;
- (void)_lookupCompletedWithResponse:(id)a0 lookupItem:(id)a1 error:(id)a2;
- (id)_onQueueCompletionOfferingForAlbumItemsQuery:(id)a0;
- (id)_onQueueStartCompletionOfferingLookupForAlbumItemsQuery:(id)a0 responseBlock:(id /* block */)a1;
- (void)_onQueueSetCachedCompletionOffering:(id)a0 forStoreLookupID:(id)a1;

@end
