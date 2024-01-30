@class UINavigationController, NSArray, NSString, UIView, UIScrollView, UIRefreshControl;
@protocol _UINavigationControllerRefreshControlHostDelegate;

@interface _UINavigationControllerRefreshControlHost : NSObject <_UIRefreshControlHosting>

@property (weak) UIRefreshControl *refreshControl;
@property (retain) NSArray *refreshControlConstraints;
@property (weak, nonatomic) id<_UINavigationControllerRefreshControlHostDelegate> delegate;
@property (readonly, weak, nonatomic) UINavigationController *navigationController;
@property (nonatomic) double restingHeightOfRefreshControl;
@property (readonly, nonatomic) double fullHeightOfRefreshControl;
@property (retain, nonatomic) UIView *hostContainerView;
@property (nonatomic) double unobstructedHeight;
@property (readonly) BOOL refreshControlInsetsAffectScrollViewRubberBanding;
@property (readonly, weak) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canHostRefreshControlOwnedByScrollView:(id)a0 inNavigationController:(id)a1;

- (double)_thresholdForObstructedContentZeroAlpha;
- (double)_alphaForRefreshingControlStateWithPossiblyObstructedContent;
- (void)stopAnimations;
- (void)_removeRefreshControlFromContainerView;
- (void)_installRefreshControlIntoContainerView;
- (void)refreshControl:(id)a0 didChangeToState:(long long)a1 fromState:(long long)a2;
- (id)initWithNavigationController:(id)a0 scrollView:(id)a1;
- (void).cxx_destruct;
- (void)_notifyLayoutDidChange;
- (void)decrementInsetHeight:(double)a0;
- (BOOL)isHostingRefreshControlOwnedByScrollView:(id)a0;
- (void)dealloc;
- (void)incrementInsetHeight:(double)a0;
- (void)_updateFadeOutProgress;
- (double)_thresholdForObstructedContentFullAlpha;

@end
