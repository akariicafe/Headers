@class NSDate;

@interface ATXScreenLogUnlockSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *sessionStartDate;
@property (retain, nonatomic) NSDate *sessionEndDate;
@property (nonatomic) unsigned long long numEngagementsInSpotlightApps;
@property (nonatomic) unsigned long long numEngagementsInSpotlightActions;
@property (nonatomic) unsigned long long numEngagementsInSuggestionsWidget;
@property (nonatomic) unsigned long long numEngagementsInSuggestionsWidgetTodayPage;
@property (nonatomic) unsigned long long numEngagementsInAppPredictionPanel;
@property (nonatomic) unsigned long long numEngagementsInAppPredictionPanelTodayPage;
@property (nonatomic) unsigned long long numEngagementsInAppLibrary;
@property (nonatomic) unsigned long long numViewsInSpotlightApps;
@property (nonatomic) unsigned long long numViewsInSpotlightActions;
@property (nonatomic) unsigned long long numViewsInSuggestionsWidget;
@property (nonatomic) unsigned long long numViewsInSuggestionsWidgetTodayPage;
@property (nonatomic) unsigned long long numViewsInAppPredictionPanel;
@property (nonatomic) unsigned long long numViewsInAppPredictionPanelTodayPage;
@property (nonatomic) unsigned long long numViewsInAppLibrary;
@property (nonatomic) BOOL spotlightEnabled;
@property (nonatomic) BOOL hasSuggestionsWidget;
@property (nonatomic) BOOL hasSuggestionsWidgetInTodayPage;
@property (nonatomic) BOOL hasAppPredictionPanel;
@property (nonatomic) BOOL hasAppPredictionPanelInTodayPage;
@property (nonatomic) BOOL appLibraryEnabled;

- (id)init;
- (void).cxx_destruct;
- (BOOL)complete;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionStartDate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)finalizeWithSessionEndDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateWithUIEventIfPossible:(id)a0;
- (void)_updateWithHomeScreenEvent:(id)a0;
- (void)_updateWithSpotlightEvent:(id)a0;
- (void)_updateWithAppDirectoryEvent:(id)a0;
- (BOOL)_widgetBundleIdIsSuggestionsWidget:(id)a0;
- (BOOL)isEqualToATXScreenLogUnlockSession:(id)a0;

@end
