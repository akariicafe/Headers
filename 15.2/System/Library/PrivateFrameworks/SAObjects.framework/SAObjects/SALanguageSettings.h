@class NSDictionary;

@interface SALanguageSettings : SABaseClientBoundCommand

@property (copy, nonatomic) NSDictionary *configuredLocales;

+ (id)languageSettings;
+ (id)languageSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
