@interface PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory : NSObject

+ (BOOL)shouldShowVoLTESwitchForSubscriptionContext:(id)a0 RATMode:(int)a1;
+ (BOOL)isVoLTESwitchTurnedOnByDefaultAndHidden:(id)a0;
+ (BOOL)shouldShow5GSASwitchForSpecifier:(id)a0 RATMode:(int)a1;

- (id)createVoLTESwitchSpecifierWithHostController:(id)a0 parentSpecifier:(id)a1;
- (id)create5GSASwitchSpecifierWithHostController:(id)a0 parentSpecifier:(id)a1;

@end
