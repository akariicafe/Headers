@class IKJSTabBar;
@protocol IKAppTabBarController;

@interface IKAppTabBar : NSObject

@property (weak, nonatomic) IKJSTabBar *jsTabBar;
@property (readonly, weak, nonatomic) id<IKAppTabBarController> controller;

- (void).cxx_destruct;
- (id)initWithTabBarController:(id)a0;
- (void)onSelect;

@end
