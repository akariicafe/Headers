@class PETEventProperty, PETScalarEventTracker;

@interface AssistantMetrics : NSObject {
    PETEventProperty *_toggleTrackerNameProperty;
    PETEventProperty *_detailToggleTrackerNameProperty;
    PETEventProperty *_onOffProperty;
    PETEventProperty *_confirmedTrueFalseProperty;
    PETEventProperty *_siriSourceProperty;
    PETEventProperty *_foundInAppsProperty;
    PETScalarEventTracker *_visitTracker;
    PETScalarEventTracker *_enableSiriTracker;
    PETScalarEventTracker *_disableSiriTracker;
    PETScalarEventTracker *_startEnrollmentTracker;
    PETScalarEventTracker *_toggleTracker;
    PETScalarEventTracker *_detailVisitTracker;
    PETScalarEventTracker *_detailVisitFoundInAppsTracker;
    PETScalarEventTracker *_detailToggleFoundInAppsTracker;
    PETScalarEventTracker *_detailToggleSiriKitTracker;
    PETScalarEventTracker *_detailToggleSearchTracker;
}

+ (id)sharedMetrics;
+ (void)didToggle:(id)a0 on:(BOOL)a1;
+ (void)didDetailToggle:(id)a0 bundleId:(id)a1 on:(BOOL)a2;
+ (void)didVisit;
+ (void)didEnableSiriConfirmed:(BOOL)a0 source:(id)a1;
+ (void)didDisableSiriConfirmed:(BOOL)a0 source:(id)a1;
+ (void)didStartEnrollment:(BOOL)a0;
+ (void)didDetailVisit:(id)a0;

- (void).cxx_destruct;
- (void)logVisit;
- (void)logEnableSiriConfirmed:(BOOL)a0 source:(id)a1;
- (void)logDisableSiriConfirmed:(BOOL)a0 source:(id)a1;
- (void)logStartEnrollment:(BOOL)a0;
- (void)logToggle:(id)a0 on:(BOOL)a1;
- (void)logDetailVisit:(id)a0;
- (void)logDetailToggle:(id)a0 bundleId:(id)a1 on:(BOOL)a2;
- (id)__siriSourceProperty;
- (id)__confirmedTrueFalseProperty;
- (id)__toggleTrackerNameProperty;
- (id)__onOffProperty;
- (id)__foundInAppsProperty;
- (id)__detailToggleTrackerNameProperty;
- (id)__visitTracker;
- (id)__enableSiriTracker;
- (id)__disableSiriTracker;
- (id)__startEnrollmentTracker;
- (id)__toggleTracker;
- (id)__detailVisitFoundInAppsTracker;
- (id)__detailVisitTracker;
- (id)__detailToggleFoundInAppsTracker;
- (id)__detailToggleSiriKitTracker;
- (id)__detailToggleSearchTracker;

@end
