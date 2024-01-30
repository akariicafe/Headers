@class UIBarButtonItem, UIViewController, UIView;

@interface SKUIContextActionsPresentationSource : NSObject

@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (retain, nonatomic) UIBarButtonItem *barButtonItem;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0 permittedArrowDirections:(unsigned long long)a1 animated:(BOOL)a2;

@end
