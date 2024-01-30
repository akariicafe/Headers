@class PXPhotosLayout, NSString, PXPhotosViewModel, NSTimer, PXPhotosGlobalFooterView, PXGView;
@protocol PXPhotosGridFooterPresentationDelegate;

@interface PXPhotosGridFooterPresentation : NSObject <PXChangeObserver, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver> {
    PXPhotosViewModel *_viewModel;
    PXGView *_gridView;
    PXPhotosLayout *_layout;
    BOOL _hasAppearedOnce;
    BOOL _hasReachedInitialPosition;
    PXPhotosGlobalFooterView *_reusableFooterView;
    double _lastUserScrollTime;
    BOOL _didAutoReveal;
    NSTimer *_autoRevealMinimumIdleTimer;
}

@property (nonatomic) BOOL shouldAutoReveal;
@property (nonatomic) BOOL wantsFooter;
@property (weak, nonatomic) id<PXPhotosGridFooterPresentationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewControllerWillBeginScrolling:(id)a0;
- (void)viewDidAppear;
- (void)_conditionallyAutoRevealFooterView;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithViewModel:(id)a0 gridView:(id)a1 layout:(id)a2;
- (void)viewDidScrollToInitialPosition;
- (void)scrollViewControllerContentBoundsDidChange:(id)a0;
- (void)photosGlobalFooterView:(id)a0 presentViewController:(id)a1;
- (double)_footerVisibleAmountIncludingSafeAreaInsets:(BOOL)a0;
- (BOOL)_shouldAutoRevealFooterView;
- (id)init;
- (void)_updateFooterView;
- (void).cxx_destruct;
- (void)photosGlobalFooterViewDidChangeHeight:(id)a0;
- (void)viewWillAppear;
- (void)_updateWantsFooter;
- (void)_conditionallyAutoRevealFooterViewWithLastUserScrollTime:(double)a0;

@end
