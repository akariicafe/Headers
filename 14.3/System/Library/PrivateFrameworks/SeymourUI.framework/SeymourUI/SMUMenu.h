@class UIViewController, SMUMenuViewController;

@interface SMUMenu : NSObject {
    SMUMenuViewController *_viewController;
}

@property (readonly, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ dismissHandler;

- (void).cxx_destruct;
- (void)setItems:(id)a0;
- (id)initWithTitle:(id)a0 glyph:(id)a1;

@end
