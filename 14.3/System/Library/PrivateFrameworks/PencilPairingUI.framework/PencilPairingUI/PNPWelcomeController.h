@class OBTrayButton;
@protocol PNPWelcomeControllerDelegate;

@interface PNPWelcomeController : OBWelcomeController

@property (nonatomic) long long controllerType;
@property (nonatomic) long long buttonType;
@property (retain, nonatomic) OBTrayButton *trayButton;
@property (nonatomic) long long deviceType;
@property (weak, nonatomic) id<PNPWelcomeControllerDelegate> delegate;

+ (id)bundleImageNamed:(id)a0;
+ (id)controllerWithType:(long long)a0 buttonType:(long long)a1 deviceType:(long long)a2 delegate:(id)a3;

- (void).cxx_destruct;
- (void)buttonPressed:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)bundleImageNamed:(id)a0;
- (void)setControllerType:(long long)a0 buttonType:(long long)a1 deviceType:(long long)a2 delegate:(id)a3;
- (void)addButtonWithType:(long long)a0;

@end
