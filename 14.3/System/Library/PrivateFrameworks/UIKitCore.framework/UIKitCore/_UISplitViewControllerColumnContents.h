@class UINavigationController, UIViewController;

@interface _UISplitViewControllerColumnContents : NSObject

@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) UIViewController *navigationControllerWrapper;

- (void).cxx_destruct;
- (id)description;
- (id)initWithViewController:(id)a0 navigationController:(id)a1 navigationControllerWrapper:(id)a2;

@end
