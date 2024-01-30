@class CHTrendsNotificationManager, CHFitnessAppBadgeManager, CHCompanionWidgetSchedulingManager, HDActivityCacheManager, NSString, CHActivityApplicationInstallationManager, CHCompanionWorkoutCreditManager, HDProfile, CHCoachingDiagnosticManager, FCHealthService;

@interface CHCompanionHealthProfileExtension : NSObject <HDProfileExtension, CHCompanionHealthProfileExtending, FCHealthProfileExtending> {
    int _standalonePhoneFitnessModeChangeToken;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) CHActivityApplicationInstallationManager *activityApplicationInstallationManager;
@property (retain, nonatomic) HDActivityCacheManager *activityCacheManager;
@property (retain, nonatomic) CHCompanionWorkoutCreditManager *companionWorkoutCreditManager;
@property (retain, nonatomic) CHFitnessAppBadgeManager *fitnessAppBadgeManager;
@property (retain, nonatomic) CHCoachingDiagnosticManager *coachDiagnosticManager;
@property (retain, nonatomic) CHTrendsNotificationManager *trendsNotificationManager;
@property (retain, nonatomic) CHCompanionWidgetSchedulingManager *widgetSchedulingManager;
@property (retain, nonatomic) FCHealthService *fitnessCoachingHealthService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)registerFitnessAppBadgeCountProvider:(id)a0;
- (void)dealloc;
- (id)_activityCacheManager;
- (void)requestFitnessAppBadgeCountUpdate;
- (void).cxx_destruct;
- (void)unregisterFitnessAppBadgeCountProvider:(id)a0;

@end
