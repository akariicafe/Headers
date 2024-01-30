@class NSDictionary;

@interface BKSKeyboardDefaults : BSAbstractDefaultDomain

@property (retain, nonatomic) NSDictionary *modifierKeyRemapping;
@property (retain, nonatomic) NSDictionary *oldModifierKeyRemapping;

- (id)init;
- (void)migrateIfNeeded;
- (void)_bindAndRegisterDefaults;

@end
