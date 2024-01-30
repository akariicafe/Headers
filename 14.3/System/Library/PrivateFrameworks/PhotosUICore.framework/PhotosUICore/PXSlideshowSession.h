@class NSString, UIView, PHAssetCollection, OKPresentationViewController;
@protocol PXSlideshowSessionDelegate;

@interface PXSlideshowSession : NSObject <OKPresentationViewControllerDelegate> {
    OKPresentationViewController *_presentationViewController;
}

@property (weak, nonatomic) id<PXSlideshowSessionDelegate> delegate;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) long long startIndex;
@property (readonly, nonatomic) OKPresentationViewController *slideshowViewController;
@property (readonly, nonatomic) UIView *slideshowView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)preloadSlideshowFrameworkIfNeeded;
+ (void *)_loadSlideshowFrameworkIfNeeded;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAssetCollection:(id)a0 startIndex:(long long)a1;
- (id)_presentationGuidelines;
- (void)_initPresentationViewController;
- (void)presentationViewControllerDidPrepare:(id)a0;

@end
