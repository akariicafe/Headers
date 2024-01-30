@class NSString, PFUbiquityLocation, NSURL, NSOperationQueue, NSSet;

@interface PFUbiquityContainerIdentifier : NSObject <NSFilePresenter> {
    NSString *_storeName;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
}

@property (readonly, nonatomic) NSString *uuidString;
@property (readonly, nonatomic) PFUbiquityLocation *uuidFileLocation;
@property (readonly, nonatomic) BOOL usedExistingUUIDFile;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (BOOL)identifyContainer:(id *)a0;
- (id)initWithLocalPeerID:(id)a0 storeName:(id)a1 andUbiquityRootLocation:(id)a2;
- (BOOL)replaceIdentifierWithUUID:(id)a0 error:(id *)a1;
- (BOOL)writeToDisk:(id *)a0;
- (void)setUUIDStringFromLocation:(id)a0;

@end
