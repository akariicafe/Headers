@class UIButton;

@interface BFFSplashButton : NSObject

@property (retain) UIButton *button;
@property long long style;
@property (copy) id /* block */ action;

- (void).cxx_destruct;

@end
