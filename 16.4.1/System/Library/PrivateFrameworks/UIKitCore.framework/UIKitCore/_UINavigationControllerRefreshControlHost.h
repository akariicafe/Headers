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
- (void)incrementInsetHeight:(double)a0;
- (BOOL)isHostingRefreshControlOwnedByScrollView:(id)a0;
- (void)stopAnimations;
- (void)_notifyLayoutDidChange;
- (void)decrementInsetHeight:(double)a0;
- (void)refreshControl:(id)a0 didChangeToState:(long long)a1 fromState:(long long)a2;
- (void)_updateFadeOutProgress;
- (id)initWithNavigationController:(id)a0 scrollView:(id)a1;
- (double)_thresholdForObstructedContentFullAlpha;
- (void)_removeRefreshControlFromContainerView;
- (void)dealloc;
- (double)_alphaForRefreshingControlStateWithPossiblyObstructedContent;
- (void)_installRefreshControlIntoContainerView;
- (void).cxx_destruct;

@end
