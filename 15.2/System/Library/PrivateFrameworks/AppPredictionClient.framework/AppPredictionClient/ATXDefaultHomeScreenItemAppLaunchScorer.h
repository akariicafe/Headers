@class ATXAggregatedAppLaunchData, ATXHomeScreenWidgetDescriptor;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemAppLaunchScorer : NSObject {
    ATXHomeScreenWidgetDescriptor *_widget;
    id<ATXCategoricalHistogramProtocol> _spotlightLaunchesHistogram;
}

@property (readonly, nonatomic) ATXAggregatedAppLaunchData *score;

+ (BOOL)hasiCloudFamily;
+ (id)_fetchFamilyCircle;
+ (id)_fetchFamilyCircleWithUserDefaults:(id)a0;
+ (id)_requestUpdatedFamilyCircle;

- (id)_rawLaunchCountAndNumberOfUniqueDaysParentAppWasLaunchedWithCachedAppLaunchData:(id)a0;
- (id)_appLaunchScoreForSleepWidget;
- (BOOL)_isSleepWidget;
- (BOOL)isWidgetSpecialCase;
- (BOOL)_isContactsWidget;
- (id)scoreWithCachedAppLaunchData:(id)a0;
- (id)initWithWidget:(id)a0 appLaunchHistogram:(id)a1;
- (void).cxx_destruct;
- (BOOL)_isAppPredictionsWidget;
- (double)_contactsWidgetiCloudFamilyScore;
- (id)_appLaunchScoreForContactsWidget;

@end
