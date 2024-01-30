@class NSSet, NSString, NSURL, NSOperationQueue;

@interface PHImportAssetFilePresenter : NSObject <NSFilePresenter>

@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPrimaryURL:(id)a0 presentedURL:(id)a1;
- (void).cxx_destruct;

@end
