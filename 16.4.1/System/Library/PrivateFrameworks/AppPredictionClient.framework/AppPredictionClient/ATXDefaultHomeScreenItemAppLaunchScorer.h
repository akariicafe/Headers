@class ATXHomeScreenWidgetDescriptor;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemAppLaunchScorer : NSObject {
    ATXHomeScreenWidgetDescriptor *_widget;
    id<ATXCategoricalHistogramProtocol> _spotlightLaunchesHistogram;
}

- (BOOL)isWidgetSpecialCase;
- (id)_appLaunchScoreForContactsWidget;
- (id)_rawLaunchCountAndNumberOfUniqueDaysParentAppWasLaunchedWithCachedAppLaunchData:(id)a0;
- (id)_dateOfSleepOnboardingCompletion;
- (id)scoreWithCachedAppLaunchData:(id)a0;
- (id)_appLaunchScoreForSleepWidget;
- (BOOL)_isSleepWidget;
- (id)initWithWidget:(id)a0 appLaunchHistogram:(id)a1;
- (double)_contactsWidgetiCloudFamilyScore;
- (BOOL)_isAppPredictionsWidget;
- (BOOL)_isContactsWidget;
- (void).cxx_destruct;

@end
