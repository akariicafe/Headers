@interface SFRestrictionsPasscodeController : NSObject

+ (BOOL)settingEnabled;
+ (void)_migrateRestrictionsPasscodeIfNeeded;
+ (BOOL)legacyRestrictionsInEffect;
+ (id)pinFromHashAndSaltLegacyPassword;
+ (id)saltForHashAndSaltLegacyRestrictions;
+ (void)removePasswordForHashAndSaltLegacyRestrictions;
+ (id)hashForHashAndSaltLegacyRestrictions;
+ (void)migrateRestrictionsPasscode;
+ (id)_keychainPasswordForRestrictions;
+ (void)_setKeychainPasswordForRestrictions:(id)a0;
+ (id)_generateSalt;
+ (void)setPIN:(id)a0;
+ (void)_removeKeychainPasswordForRestrictions;
+ (id)newHashDataForPassword:(id)a0 andSalt:(id)a1;
+ (BOOL)hasHashAndSaltLegacyPassword;
+ (BOOL)validatePIN:(id)a0;

@end
