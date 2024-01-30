@class CHTrendsNotificationManager, CHFitnessAppBadgeManager, CHCompanionWidgetSchedulingManager, NSString, CHActivityApplicationInstallationManager, CHCompanionWorkoutCreditManager, HDProfile, CHCoachingDiagnosticManager;

@interface CHCompanionHealthProfileExtension : NSObject <HDProfileExtension, CHCompanionHealthProfileExtending>

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) CHActivityApplicationInstallationManager *activityApplicationInstallationManager;
@property (retain, nonatomic) CHCompanionWorkoutCreditManager *companionWorkoutCreditManager;
@property (retain, nonatomic) CHFitnessAppBadgeManager *fitnessAppBadgeManager;
@property (retain, nonatomic) CHCoachingDiagnosticManager *coachDiagnosticManager;
@property (retain, nonatomic) CHTrendsNotificationManager *trendsNotificationManager;
@property (retain, nonatomic) CHCompanionWidgetSchedulingManager *widgetSchedulingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)registerFitnessAppBadgeCountProvider:(id)a0;
- (void)requestFitnessAppBadgeCountUpdate;
- (void)unregisterFitnessAppBadgeCountProvider:(id)a0;

@end
