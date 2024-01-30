@class UIViewController;

@interface ASBackgroundObserver : NSObject

@property (readonly, weak, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) id /* block */ block;

- (void)_sceneDidEnterBackground:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_hostDidEnterBackground:(id)a0;
- (id)initWithViewController:(id)a0 block:(id /* block */)a1;

@end
