@interface MCAnalyticsDailyStatusEvent : MCAnalyticsEvent

+ (void)_addCloudConfigInformation:(id)a0;
+ (void)_addMDMConfigInformation:(id)a0;
+ (void)_addSharediPadInformation:(id)a0;
+ (void)_addProfileAndPayloadInformation:(id)a0;
+ (void)_addRestrictionInformation:(id)a0;
+ (void)_addSettingsInformation:(id)a0;
+ (id)_getCounterDictionaryFromKeySet:(id)a0;

- (id)initEvent;

@end
