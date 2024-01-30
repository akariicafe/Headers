@class UINavigationController, UIViewController;

@interface _UISplitViewControllerColumnContents : NSObject

@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) UIViewController *navigationControllerWrapper;

- (id)initWithViewController:(id)a0 navigationController:(id)a1 navigationControllerWrapper:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
