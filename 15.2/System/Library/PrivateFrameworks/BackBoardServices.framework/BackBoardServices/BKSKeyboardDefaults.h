@class NSDictionary;

@interface BKSKeyboardDefaults : BSAbstractDefaultDomain

@property (readonly, nonatomic) NSDictionary *modifierKeyRemapping;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
