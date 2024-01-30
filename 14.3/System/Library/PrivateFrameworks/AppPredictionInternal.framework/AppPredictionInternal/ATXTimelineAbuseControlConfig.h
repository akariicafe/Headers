@class NSArray, NSDictionary;

@interface ATXTimelineAbuseControlConfig : NSObject {
    NSDictionary *_config;
}

@property (readonly, nonatomic) NSArray *denyList;
@property (readonly, nonatomic) unsigned long long minimumSecondsBetweenMetadataUpdatesPerSource;
@property (readonly, nonatomic) unsigned long long timelineUpdateLimitPerSource;
@property (readonly, nonatomic) unsigned long long timelineUpdateLimitPerAppBundleId;
@property (readonly, nonatomic) unsigned long long defaultDurationForTimelineSuggestions;
@property (readonly, nonatomic) unsigned long long defaultDurationForFallbackTimelineSuggestions;

- (id)init;
- (void).cxx_destruct;
- (long long)hardRotationQuotaForWidgetWithIdentifier:(id)a0 kind:(id)a1;
- (long long)softRotationQuotaForWidgetWithIdentifier:(id)a0 kind:(id)a1;
- (long long)_resolvedValueForConfigWithKey:(id)a0 forWidgetWithIdentifier:(id)a1 kind:(id)a2;
- (double)durationLimitForWidgetWithIdentifier:(id)a0 kind:(id)a1;
- (double)coolDownIntervalForWidgetWithIdentifier:(id)a0 kind:(id)a1;

@end
