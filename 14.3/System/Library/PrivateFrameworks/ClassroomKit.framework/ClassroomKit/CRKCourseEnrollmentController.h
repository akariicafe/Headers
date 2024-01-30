@class NSString, NSArray, CATRemoteTaskOperation, NSSet, CRKSettingsUIVisibleRemoteValue, NSDictionary, CRKSecureCodedUserDefaultsObject, CRKStudentDaemonProxy;
@protocol CRKCourseEnrollmentControllerDelegate;

@interface CRKCourseEnrollmentController : NSObject <CRKStudentDaemonProxyObserver, CATTaskOperationNotificationDelegate, CRKSettingsPaneInfoProvider> {
    id<CRKCourseEnrollmentControllerDelegate> mDelegate;
    CRKStudentDaemonProxy *mDaemonProxy;
    CATRemoteTaskOperation *mBrowseOperation;
    CATRemoteTaskOperation *mActiveCoursesOperation;
    CRKSecureCodedUserDefaultsObject *mStoredCourses;
    BOOL mConfigurationFetched;
    CRKSettingsUIVisibleRemoteValue *mSettingsUIVisibleRemoteValue;
}

@property (copy, nonatomic) NSArray *courses;
@property (copy, nonatomic) NSArray *courseInvitations;
@property (copy, nonatomic) NSSet *acceptedInvitationIdentifiers;
@property (copy, nonatomic) NSArray *activeCourseIdentifiers;
@property (copy, nonatomic) NSArray *activeInstructorIdentifiers;
@property (retain, nonatomic) NSDictionary *observingInstructorIdentifiersByCourseIdentifiers;
@property (nonatomic) unsigned long long configurationType;
@property (readonly, nonatomic) BOOL settingsUIVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)taskOperation:(id)a0 didPostNotificationWithName:(id)a1 userInfo:(id)a2;
- (id)initWithDelegate:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithStudentDaemonProxy:(id)a0 delegate:(id)a1;
- (void)daemonProxyDidConnect:(id)a0;
- (void)fetchStoredCourses;
- (void)daemonProxyDidDisconnect:(id)a0;
- (void)fetchActiveCourses;
- (void)fetchCourses;
- (void)fetchCourseInvitations;
- (void)fetchScreenObservers;
- (void)refreshASMCourses;
- (void)startLongRunningOperations;
- (void)stopLongRunningOperations;
- (void)fetchConfiguration;
- (void)screenObserversHaveChanged:(id)a0;
- (void)stopBrowsingForInvitations;
- (BOOL)canBrowseForInvitations;
- (void)startBrowsingForInvitations;
- (void)fetchConfigurationTypeOperationDidFinish:(id)a0;
- (void)updateInvitationBrowsingStatus;
- (void)fetchActiveCoursesOperationDidFinish:(id)a0;
- (void)fetchCoursesOperationDidFinish:(id)a0;
- (void)storeCourses;
- (void)fetchCourseInvitationsOperationDidFinish:(id)a0;
- (void)fetchScreenObserversDidFinish:(id)a0;
- (void)refreshASMCoursesOperationDidFail:(id)a0;
- (void)daemonProxy:(id)a0 didReceiveNotificationWithName:(id)a1 userInfo:(id)a2;
- (id)courseWithIdentifier:(id)a0;
- (id)invitationWithCourseIdentifier:(id)a0;
- (id)coursesWithInstructorIdentifier:(id)a0;

@end
