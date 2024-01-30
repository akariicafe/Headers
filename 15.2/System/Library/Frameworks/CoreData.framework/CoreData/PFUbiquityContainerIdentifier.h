@class NSSet, NSString, NSURL, NSOperationQueue, PFUbiquityLocation;

@interface PFUbiquityContainerIdentifier : NSObject <NSFilePresenter> {
    NSString *_storeName;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_uuidString;
    PFUbiquityLocation *_uuidFileLocation;
    BOOL _usedExistingUUIDFile;
}

@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (id)initWithLocalPeerID:(id)a0 storeName:(id)a1 andUbiquityRootLocation:(id)a2;
- (id)init;
- (void)dealloc;

@end
