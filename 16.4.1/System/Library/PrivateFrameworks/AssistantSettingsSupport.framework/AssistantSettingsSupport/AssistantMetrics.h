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
+ (void)didDetailVisit:(id)a0;
+ (void)didDisableSiriConfirmed:(BOOL)a0 source:(id)a1;
+ (void)didDetailToggle:(id)a0 bundleId:(id)a1 on:(BOOL)a2;
+ (void)didEnableSiriConfirmed:(BOOL)a0 source:(id)a1;
+ (void)didStartEnrollment:(BOOL)a0;
+ (void)didToggle:(id)a0 on:(BOOL)a1;
+ (void)didVisit;

- (void).cxx_destruct;
- (id)__onOffProperty;
- (void)logDetailVisit:(id)a0;
- (id)__detailToggleFoundInAppsTracker;
- (id)__detailToggleSiriKitTracker;
- (id)__detailVisitTracker;
- (id)__enableSiriTracker;
- (id)__siriSourceProperty;
- (id)__toggleTrackerNameProperty;
- (id)__detailVisitFoundInAppsTracker;
- (id)__toggleTracker;
- (void)logDisableSiriConfirmed:(BOOL)a0 source:(id)a1;
- (id)__confirmedTrueFalseProperty;
- (id)__detailToggleSearchTracker;
- (id)__detailToggleTrackerNameProperty;
- (id)__disableSiriTracker;
- (id)__foundInAppsProperty;
- (id)__startEnrollmentTracker;
- (id)__visitTracker;
- (void)logDetailToggle:(id)a0 bundleId:(id)a1 on:(BOOL)a2;
- (void)logEnableSiriConfirmed:(BOOL)a0 source:(id)a1;
- (void)logStartEnrollment:(BOOL)a0;
- (void)logToggle:(id)a0 on:(BOOL)a1;
- (void)logVisit;

@end
