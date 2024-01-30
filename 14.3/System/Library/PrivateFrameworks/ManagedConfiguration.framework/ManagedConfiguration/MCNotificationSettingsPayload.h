@class NSArray;

@interface MCNotificationSettingsPayload : MCPayload

@property (retain, nonatomic) NSArray *notificationSettings;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)validatedNotificationSettings:(id)a0 outError:(id *)a1;

@end
