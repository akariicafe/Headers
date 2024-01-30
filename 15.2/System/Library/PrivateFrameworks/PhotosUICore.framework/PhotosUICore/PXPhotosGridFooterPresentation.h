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

- (void)scrollViewControllerContentBoundsDidChange:(id)a0;
- (void)scrollViewControllerWillBeginScrolling:(id)a0;
- (void)photosGlobalFooterView:(id)a0 presentViewController:(id)a1;
- (void)photosGlobalFooterViewDidChangeHeight:(id)a0;
- (void)viewDidScrollToInitialPosition;
- (double)_footerVisibleAmountIncludingSafeAreaInsets:(BOOL)a0;
- (void)_conditionallyAutoRevealFooterViewWithLastUserScrollTime:(double)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (BOOL)_shouldAutoRevealFooterView;
- (id)initWithViewModel:(id)a0 gridView:(id)a1 layout:(id)a2;
- (void)_updateWantsFooter;
- (void)_updateFooterView;
- (void)_conditionallyAutoRevealFooterView;
- (void)viewDidAppear;

@end
