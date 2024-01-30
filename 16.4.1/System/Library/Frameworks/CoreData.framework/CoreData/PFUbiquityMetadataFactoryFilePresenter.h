@class NSSet, NSString, NSURL, NSOperationQueue, PFUbiquityLocation;

@interface PFUbiquityMetadataFactoryFilePresenter : NSObject <NSFilePresenter> {
    PFUbiquityLocation *_presentedItemLocation;
}

@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (void)relinquishPresentedItemToReader:(id /* block */)a0;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)relinquishPresentedItemToWriter:(id /* block */)a0;
- (id)init;
- (id)initWithMetadataStoreFileLocation:(id)a0;

@end
