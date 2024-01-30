@class NSString, ATXNPlusOneStudyAppLaunchCounts;

@interface ATXNPlusOneStudyEvent : NSObject

@property (retain, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) NSString *extensionBundleId;
@property (retain, nonatomic) NSString *widgetKind;
@property (nonatomic) BOOL widgetExistsOnScreen;
@property (nonatomic) BOOL appPushNotificationEnabled;
@property (nonatomic) double appLaunchPopularity;
@property (nonatomic) unsigned long long appScreenTimeCategory;
@property (retain, nonatomic) ATXNPlusOneStudyAppLaunchCounts *appLaunchCounts;
@property (nonatomic) long long suggestionCountInfoHeuristicHigh;
@property (nonatomic) long long suggestionCountInfoHeuristicMed;
@property (nonatomic) long long suggestionCountInfoHeuristicLow;
@property (nonatomic) long long suggestionCountRelevantShortcut;
@property (nonatomic) long long suggestionCountShortcutConversionHigh;
@property (nonatomic) long long suggestionCountShortcutConversionMed;
@property (nonatomic) long long suggestionCountShortcutConversionLow;

- (void).cxx_destruct;
- (id)coreAnalyticsEvent;

@end
