@class NSString, NSArray;

@interface SBExternalGlobalDefaults : BSAbstractDefaultDomain

@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSArray *languages;
@property (retain, nonatomic) NSArray *keyboards;

+ (BOOL)__useDynamicMethodResolution;

- (id)init;
- (void)flushExternalCaches;
- (void)removeFormattedPhoneNumberFromGlobalPreferences;

@end
