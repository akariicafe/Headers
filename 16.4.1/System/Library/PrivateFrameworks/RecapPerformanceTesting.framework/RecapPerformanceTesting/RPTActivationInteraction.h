@class UIWindow;

@interface RPTActivationInteraction : NSObject <RPTInteraction>

@property (nonatomic) unsigned long long action;
@property (retain, nonatomic) UIWindow *window;

- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })actionPoint;
- (id)initForAction:(unsigned long long)a0 window:(id)a1;
- (void)invokeWithComposer:(id)a0 duration:(double)a1;
- (id)reversedInteraction;

@end
