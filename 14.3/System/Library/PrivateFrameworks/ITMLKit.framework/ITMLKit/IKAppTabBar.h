@class IKJSTabBar;
@protocol IKAppTabBarController;

@interface IKAppTabBar : NSObject

@property (weak, nonatomic) IKJSTabBar *jsTabBar;
@property (readonly, weak, nonatomic) id<IKAppTabBarController> controller;

- (void).cxx_destruct;
- (void)onSelect;
- (id)initWithTabBarController:(id)a0;

@end
