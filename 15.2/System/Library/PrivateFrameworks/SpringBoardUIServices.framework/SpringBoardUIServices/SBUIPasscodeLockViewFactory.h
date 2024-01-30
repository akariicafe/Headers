@interface SBUIPasscodeLockViewFactory : NSObject

+ (id)passcodeLockViewForStyle:(int)a0;
+ (id)_passcodeLockViewForStyle:(int)a0 withLightStyle:(BOOL)a1;
+ (id)lightPasscodeLockViewForStyle:(int)a0;
+ (void)_commonInitPasscodeView:(id)a0 forStyle:(int)a1;
+ (id)_defaultPasscodeBiometricResource;
+ (id)passcodeLockViewForUsersCurrentStyle;
+ (id)lightPasscodeLockViewForUsersCurrentStyle;
+ (id)installTonightPasscodeLockViewForUsersCurrentStyle;
+ (void)setPasscodeBiometricResource:(id)a0;

@end
