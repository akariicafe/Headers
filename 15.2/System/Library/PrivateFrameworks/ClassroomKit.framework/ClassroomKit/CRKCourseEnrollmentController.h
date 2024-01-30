@class NSHashTable, NSArray, CATRemoteTaskOperation, NSSet, NSString, NSDictionary, CRKSettingsUIVisibleRemoteValue, CRKSecureCodedUserDefaultsObject, CRKStudentDaemonProxy;

@interface CRKCourseEnrollmentController : NSObject <CRKStudentDaemonProxyObserver, CATTaskOperationNotificationDelegate, CRKSettingsPaneInfoProvider> {
    CATRemoteTaskOperation *mBrowseOperation;
    CRKSecureCodedUserDefaultsObject *mStoredCourses;
    BOOL mConfigurationFetched;
    CRKSettingsUIVisibleRemoteValue *mSettingsUIVisibleRemoteValue;
}

@property (class, readonly, nonatomic) CRKCourseEnrollmentController *sharedEnrollmentController;

@property (copy, nonatomic) NSArray *courses;
@property (copy, nonatomic) NSArray *courseInvitations;
@property (copy, nonatomic) NSSet *acceptedInvitationIdentifiers;
@property (retain, nonatomic) NSDictionary *observingInstructorIdentifiersByCourseIdentifiers;
@property (nonatomic) unsigned long long configurationType;
@property (retain, nonatomic) CATRemoteTaskOperation *fetchActiveInstructorsOperation;
@property (copy, nonatomic) NSSet *activeInstructors;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) BOOL settingsUIVisible;
@property (readonly, nonatomic) CRKStudentDaemonProxy *studentDaemonProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL supportsRemoteLearning;

+ (id)keyPathsForValuesAffectingSupportsRemoteLearning;

- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void)taskOperation:(id)a0 didPostNotificationWithName:(id)a1 userInfo:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)daemonProxyDidConnect:(id)a0;
- (void)daemonProxyDidDisconnect:(id)a0;
- (void)daemonProxy:(id)a0 didReceiveNotificationWithName:(id)a1 userInfo:(id)a2;
- (id)initWithStudentDaemonProxy:(id)a0;
- (void)fetchStoredCourses;
- (id)anonymousInstructorUsersForCourse:(id)a0;
- (BOOL)instructor:(id)a0 isForCourse:(id)a1;
- (id)activeInstructorsWithIdentifier:(id)a0 forCourse:(id)a1;
- (void)disconnectOperationDidFinish:(id)a0;
- (void)fetchCourses;
- (void)fetchCourseInvitations;
- (void)fetchActiveInstructors;
- (void)startLongRunningOperations;
- (void)stopLongRunningOperations;
- (void)fetchConfiguration;
- (void)stopBrowsingForInvitations;
- (BOOL)canBrowseForInvitations;
- (void)startBrowsingForInvitations;
- (void)fetchConfigurationTypeOperationDidFinish:(id)a0;
- (void)updateInvitationBrowsingStatus;
- (void)fetchCoursesOperationDidFinish:(id)a0;
- (id)coursesBySortingCourses:(id)a0;
- (id)activeCourseIdentifiers;
- (void)didUpdateCourses;
- (void)didUpdateActiveCourses;
- (void)storeCourses;
- (void)fetchCourseInvitationsOperationDidFinish:(id)a0;
- (void)didUpdateInvitations;
- (void)fetchActiveInstructorsOperationDidFinish:(id)a0;
- (BOOL)updateScreenObservingInstructors;
- (BOOL)isCourseActive:(id)a0;
- (id)activeCourses;
- (id)syntheticUserForAnonymousInstructor:(id)a0;
- (void)invitationWithIdentifierDidFail:(id)a0 withLocalizedReason:(id)a1;
- (void)didUpdateSettingsUIVisibility;
- (id)observersRespondingToSelector:(SEL)a0;
- (BOOL)isStudentScreenBeingObservedForCourse:(id)a0;
- (BOOL)isInstructorWithIdentifier:(id)a0 disconnectableForCourse:(id)a1;
- (BOOL)isInstructorWithIdentifier:(id)a0 activeForCourse:(id)a1;
- (BOOL)isInstructorWithIdentifier:(id)a0 observingStudentScreenForCourse:(id)a1;
- (void)disconnectInstructorWithIdentifier:(id)a0 forCourse:(id)a1;
- (id)instructorUsersForCourse:(id)a0;
- (void)addEnrollmentObserver:(id)a0;
- (id)courseWithIdentifier:(id)a0;
- (id)invitationWithCourseIdentifier:(id)a0;

@end
