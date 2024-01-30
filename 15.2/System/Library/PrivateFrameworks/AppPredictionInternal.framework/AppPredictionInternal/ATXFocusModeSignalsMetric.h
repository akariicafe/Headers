@class NSString, NSNumber;

@interface ATXFocusModeSignalsMetric : _ATXCoreAnalyticsMetric

@property (nonatomic) unsigned long long focusMode;
@property (retain, nonatomic) NSString *appBundleId;
@property (nonatomic) BOOL wasAppSuggestedDuringModeSetup;
@property (nonatomic) BOOL wasAppSuggestionDuringModeSetupAccepted;
@property (retain, nonatomic) NSString *widgetBundleIdAndKind;
@property (retain, nonatomic) NSString *widgetSize;
@property (retain, nonatomic) NSString *intentHash;
@property (retain, nonatomic) NSNumber *classConditionalProbabilityOfModeGivenEntity;
@property (retain, nonatomic) NSNumber *entityModeEntityScore;
@property (retain, nonatomic) NSNumber *globalPopularityForEntity;
@property (retain, nonatomic) NSNumber *modePopularityForEntity;
@property (retain, nonatomic) NSNumber *posteriorProbabilityOfEntityGivenMode;
@property (retain, nonatomic) NSNumber *categoryScore;
@property (retain, nonatomic) NSNumber *globalOccurrencesOfEntity;
@property (retain, nonatomic) NSNumber *localOccurrencesOfEntityInMode;
@property (retain, nonatomic) NSNumber *uniqueOccurrencesOfEntityInMode;

- (id)metricName;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;

@end
