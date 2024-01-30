@class NSString, UIScrollView, UIView, UIViewController;
@protocol PLExpandedPlatter, PLClickPresentationInteractionPresentable, PLExpandedPlatterPresentationViewDelegate, PLContentSizeCategoryAdjusting;

@interface PLExpandedPlatterPresentationView : UIView <UIScrollViewDelegate, PLContentSizeManaging>

@property (readonly, nonatomic) UIView<PLExpandedPlatter, PLContentSizeCategoryAdjusting> *expandedPlatterView;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) UIViewController<PLClickPresentationInteractionPresentable> *presentableViewController;
@property (weak, nonatomic) id<PLExpandedPlatterPresentationViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })contentSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handleDismissButton:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_dismissExpandedPlatterWithTrigger:(long long)a0;
- (void)_configureExpandedPlatterViewIfNecessary;
- (void)_configureScrollViewIfNecessary;
- (double)_translationWithVelocity:(double)a0 acceleration:(double)a1;

@end
