@class NSDictionary, NSString, CRKStudentDaemonProxy;
@protocol CRKScreenObservationMonitorDelegate;

@interface CRKScreenObservationMonitor : NSObject <CRKStudentDaemonProxyObserver> {
    int mNotificationToken;
}

@property (readonly, nonatomic) CRKStudentDaemonProxy *daemonProxy;
@property (readonly, nonatomic, getter=isEnrolled) BOOL enrolled;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (retain, nonatomic) NSDictionary *observingInstructorIdentifiersByCourseIdentifierString;
@property (retain, nonatomic) NSDictionary *enrolledCoursesByCourseIdentifierString;
@property (retain, nonatomic) NSDictionary *observingInstructorsByCourse;
@property (weak, nonatomic) id<CRKScreenObservationMonitorDelegate> delegate;
@property (readonly, nonatomic) BOOL hasObservingInstructors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingHasObservingInstructors;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDaemonProxy:(id)a0;
- (void)daemonProxyDidConnect:(id)a0;
- (void)daemonProxyDidDisconnect:(id)a0;
- (void)daemonProxy:(id)a0 didReceiveNotificationWithName:(id)a1 userInfo:(id)a2;
- (void)connectToStudentdIfNeeded;
- (void)enrollmentStatusDidChange;
- (void)disconnectFromStudentdIfNeeded;
- (void)fetchObservingInstructorsDidFinish:(id)a0;
- (void)updateObservingInstructorsWithDictionary:(id)a0;
- (void)fetchEnrolledCoursesForObservingInstructors:(id)a0;
- (void)fetchEnrolledCoursesDidFinish:(id)a0 userInfo:(id)a1;
- (void)updateObservingInstructorsByCourses;
- (void)fetchObservingInstructors;

@end
