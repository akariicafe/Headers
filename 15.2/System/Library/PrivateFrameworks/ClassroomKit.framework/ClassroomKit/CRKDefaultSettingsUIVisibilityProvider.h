@class NSString, CRKCourseEnrollmentController, CRKUserDefaultsObject;

@interface CRKDefaultSettingsUIVisibilityProvider : NSObject <CRKCourseEnrollmentControllerObserver, CRKSettingsUIVisibilityProvider> {
    CRKUserDefaultsObject *mUIPreviouslyVisible;
    CRKCourseEnrollmentController *mEnrollmentController;
}

@property BOOL settingsUIVisible;
@property (copy, nonatomic) NSString *paneStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectToDaemon;
- (void).cxx_destruct;
- (id)init;
- (void)enrollmentControllerDidUpdateSettingsUIVisibility:(id)a0;
- (void)enrollmentControllerDidUpdateActiveCourses:(id)a0;
- (void)migrateOldUserDefaultsValues;
- (void)updateVisibilityState;
- (void)updatePreviouslyVisibleDefaultWithValue:(BOOL)a0;
- (BOOL)isAnyCourseActiveInEnrollmentController:(id)a0;
- (void)updatePaneStatus;

@end
