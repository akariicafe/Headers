@interface MOEffectiveSettingsStore : MOSettingsStore <MOSettingsReader>

+ (id)publisherForGroups:(id)a0;
+ (id)setOfActiveRestrictionUUIDs;
+ (id)new;

- (id)valueForSetting:(id)a0 inGroup:(id)a1;
- (id)reader;
- (id)init;

@end
