@interface SBUIPasscodeLockViewFactory : NSObject

+ (void)_commonInitPasscodeView:(id)a0 forStyle:(int)a1;
+ (id)_defaultPasscodeBiometricResource;
+ (id)_passcodeLockViewForStyle:(int)a0 withLightStyle:(BOOL)a1;
+ (id)installTonightPasscodeLockViewForUsersCurrentStyle;
+ (id)lightPasscodeLockViewForStyle:(int)a0;
+ (id)lightPasscodeLockViewForUsersCurrentStyle;
+ (id)passcodeLockViewForStyle:(int)a0;
+ (id)passcodeLockViewForUsersCurrentStyle;
+ (void)setPasscodeBiometricResource:(id)a0;

@end
