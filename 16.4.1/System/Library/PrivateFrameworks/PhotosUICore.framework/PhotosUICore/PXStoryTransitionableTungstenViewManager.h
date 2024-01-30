@class PXMediaProvider, PXGLayout, UIColor, UIView, PXStoryTransitionLayout, PXGView;

@interface PXStoryTransitionableTungstenViewManager : NSObject <PXStoryTungstenViewConfiguration> {
    UIColor *_backgroundColorBeforeTransition;
}

@property (readonly, weak, nonatomic) UIView *containerView;
@property (readonly, weak, nonatomic) UIView *belowSubview;
@property (readonly, nonatomic) PXStoryTransitionLayout *transitionLayout;
@property (nonatomic) BOOL isPreparedForTransition;
@property (readonly, nonatomic) PXGLayout *contentLayout;
@property (readonly, nonatomic) PXGView *tungstenView;
@property (retain, nonatomic) PXMediaProvider *mediaProvider;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) BOOL showsHorizontalScrollIndicator;
@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (nonatomic) long long contentInsetAdjustmentBehavior;
@property (nonatomic) BOOL shouldEmbedContentLayout;
@property (nonatomic) int presentationType;

+ (id)tungstenViewManagerInContainerViewController:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_addTungstenViewToContainerView;
- (id)initWithContentLayout:(id)a0 containerView:(id)a1 belowSubview:(id)a2 containerViewController:(id)a3 configuration:(id /* block */)a4;
- (void)prepareForTransitionInContainerView:(id)a0 withContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)restoreAfterTransition;

@end
