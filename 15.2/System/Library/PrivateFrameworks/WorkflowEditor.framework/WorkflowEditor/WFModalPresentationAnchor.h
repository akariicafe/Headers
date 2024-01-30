@class UIViewController, UIView;

@interface WFModalPresentationAnchor : NSObject

@property (readonly, nonatomic) UIViewController *sourceViewController;
@property (readonly, nonatomic) UIView *sourceView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;

- (void).cxx_destruct;
- (id)initWithSourceViewController:(id)a0 sourceView:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
