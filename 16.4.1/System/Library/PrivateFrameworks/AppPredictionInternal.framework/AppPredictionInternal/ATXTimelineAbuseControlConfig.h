@class ATXTimelineRelevancePersonalizedConfig, NSString, NSArray, NSDictionary;

@interface ATXTimelineAbuseControlConfig : NSObject {
    NSDictionary *_config;
    ATXTimelineRelevancePersonalizedConfig *_personalizedConfig;
}

@property (retain, nonatomic) NSString *timelineRelevanceABGroup;
@property (retain, nonatomic) NSArray *widgetsExcludedFromPersonalizedQuotaUpdate;
@property (nonatomic) long long defaultSoftRotationQuotaForDiverseSchemas;
@property (nonatomic) long long defaultHardRotationQuotaForDiverseSchemas;
@property (readonly, nonatomic) NSArray *denyList;
@property (readonly, nonatomic) unsigned long long minimumSecondsBetweenMetadataUpdatesPerSource;
@property (readonly, nonatomic) unsigned long long timelineUpdateLimitPerSource;
@property (readonly, nonatomic) unsigned long long timelineUpdateLimitPerAppBundleId;
@property (readonly, nonatomic) unsigned long long defaultDurationForTimelineSuggestions;
@property (readonly, nonatomic) unsigned long long defaultDurationForFallbackTimelineSuggestions;
@property (readonly, nonatomic) long long defaultSoftRotationQuota;
@property (readonly, nonatomic) long long defaultHardRotationQuota;
@property (readonly, nonatomic) long long defaultSoftRotationQuotaForSingleScoreSchemas;
@property (readonly, nonatomic) long long defaultHardRotationQuotaForSingleScoreSchemas;
@property (readonly, nonatomic) long long defaultSoftRotationQuotaForLikelyDiverseSchemas;
@property (readonly, nonatomic) long long defaultHardRotationQuotaForLikelyDiverseSchemas;
@property (readonly, nonatomic) long long defaultDurationLimit;
@property (readonly, nonatomic) long long defaultDurationLimitForSingleScoreSchemas;
@property (readonly, nonatomic) long long defaultDurationLimitForLikelyDiverseSchemas;
@property (readonly, nonatomic) long long defaultDurationLimitForDiverseSchemas;

- (BOOL)shouldUsePersonalizedBudgets;
- (long long)softRotationQuotaForWidgetWithIdentifier:(id)a0 kind:(id)a1;
- (double)coolDownIntervalForWidgetWithIdentifier:(id)a0 kind:(id)a1;
- (long long)hardRotationQuotaForWidgetWithIdentifier:(id)a0 kind:(id)a1;
- (BOOL)stalenessDisabledForWidgetWithIdentifier:(id)a0 kind:(id)a1;
- (long long)resolvedValueForConfigWithKey:(id)a0 forWidgetWithIdentifier:(id)a1 kind:(id)a2;
- (BOOL)randomizationDisabledForWidgetWithIdentifier:(id)a0 kind:(id)a1;
- (id)init;
- (double)durationLimitForWidgetWithIdentifier:(id)a0 kind:(id)a1;
- (void).cxx_destruct;

@end
