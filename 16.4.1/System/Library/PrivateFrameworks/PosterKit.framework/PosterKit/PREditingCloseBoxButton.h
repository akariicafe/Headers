@class UITapGestureRecognizer, NSString;

@interface PREditingCloseBoxButton : PREditingTitledButton <UIPointerInteractionDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *actionTapGestureRecognizer;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } hitTestPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })backgroundInsets;
- (void).cxx_destruct;

@end
