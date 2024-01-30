@class NSString, CRKCourseEnrollmentController, CRKUserDefaultsObject;

@interface CRKDefaultSettingsUIVisibilityProvider : NSObject <CRKCourseEnrollmentControllerDelegate, CRKSettingsUIVisibilityProvider> {
    CRKUserDefaultsObject *mUIPreviouslyVisible;
    CRKCourseEnrollmentController *mEnrollmentController;
}

@property BOOL settingsUIVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)connectToDaemon;
- (void)enrollmentControllerDidUpdateSettingsUIVisibility:(id)a0;
- (void)migrateOldUserDefaultsValues;
- (void)updateVisibilityState;
- (void)updatePreviouslyVisibleDefaultWithValue:(BOOL)a0;

@end
