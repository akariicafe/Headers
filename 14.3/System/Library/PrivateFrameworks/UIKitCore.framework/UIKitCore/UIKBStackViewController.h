@class UIStackView;

@interface UIKBStackViewController : UIViewController

@property (readonly, nonatomic) UIStackView *stackView;

- (void)removeChildViewController:(id)a0;
- (void)loadView;
- (void)addChildViewController:(id)a0;

@end
