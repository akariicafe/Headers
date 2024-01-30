@class UIFocusContainerGuide;

@interface _TVFocusRedirectView : UIView

@property (nonatomic) BOOL containsInertia;
@property (readonly, nonatomic) UIFocusContainerGuide *containerGuide;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_containsInertiaSelectionChanges;

@end
