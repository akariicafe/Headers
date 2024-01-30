@class NSSet, PFUbiquityLocation, NSURL, NSOperationQueue, NSString;

@interface PFUbiquityMetadataFactoryFilePresenter : NSObject <NSFilePresenter>

@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, nonatomic) PFUbiquityLocation *presentedItemLocation;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (void)relinquishPresentedItemToWriter:(id /* block */)a0;
- (id)initWithMetadataStoreFileLocation:(id)a0;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)a0;
- (void)relinquishPresentedItemToReader:(id /* block */)a0;

@end
