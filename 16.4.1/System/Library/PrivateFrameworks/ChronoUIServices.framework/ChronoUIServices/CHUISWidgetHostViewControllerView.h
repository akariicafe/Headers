@class CHUISWidgetHostViewController;

@interface CHUISWidgetHostViewControllerView : UIView

@property (weak, nonatomic) CHUISWidgetHostViewController *parentController;

- (id)accessibilityHUDRepresentation;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)showsLargeContentViewer;
- (void).cxx_destruct;

@end
