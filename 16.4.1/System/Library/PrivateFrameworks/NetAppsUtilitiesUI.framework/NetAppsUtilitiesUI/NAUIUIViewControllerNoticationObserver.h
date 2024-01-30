@class UIViewController, NSMutableArray;

@interface NAUIUIViewControllerNoticationObserver : NSObject {
    NSMutableArray *_observations;
}

@property (weak, nonatomic) UIViewController *viewController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
