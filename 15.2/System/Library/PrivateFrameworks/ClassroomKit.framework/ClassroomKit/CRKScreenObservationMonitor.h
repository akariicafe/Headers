@class NSDictionary, CRKFetchObservingInstructorsByCourseOperation;
@protocol CRKStudentConnectionPrimitives, CRKFeatureDataStoreProtocol, CRKDarwinNotificationPublisher, CRKStudentConnection, CRKCancelable, CRKObservation, CRKScreenObservationMonitorDelegate;

@interface CRKScreenObservationMonitor : NSObject

@property (readonly, nonatomic) id<CRKStudentConnectionPrimitives> studentConnectionPrimitives;
@property (readonly, nonatomic) id<CRKDarwinNotificationPublisher> darwinNotificationPublisher;
@property (readonly, nonatomic) id<CRKFeatureDataStoreProtocol> featureDataStore;
@property (retain, nonatomic) id<CRKStudentConnection> studentConnection;
@property (retain, nonatomic) id<CRKObservation> observersDidChangeObservation;
@property (retain, nonatomic) id<CRKCancelable> enrollmentStatusDidChangeSubscription;
@property (copy, nonatomic) NSDictionary *observingInstructorsByCourse;
@property (retain, nonatomic) CRKFetchObservingInstructorsByCourseOperation *fetchObservingInstructorsByCourseOperation;
@property (nonatomic, getter=isConnecting) BOOL connecting;
@property (weak, nonatomic) id<CRKScreenObservationMonitorDelegate> delegate;
@property (readonly, nonatomic) BOOL hasObservingInstructors;

+ (id)keyPathsForValuesAffectingHasObservingInstructors;
+ (BOOL)automaticallyNotifiesObserversOfObservingInstructorsByCourse;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)beginObservingEnrollmentStatus;
- (void)connectToStudentdIfNeeded;
- (id)initWithStudentConnectionPrimitives:(id)a0 darwinNotificationPublisher:(id)a1 featureDataStore:(id)a2;
- (void)disconnectFromStudentdIfNeeded;
- (void)enrollmentStatusDidChange;
- (void)didEstablishStudentConnection:(id)a0;
- (void)didLoseStudentConnection;
- (void)fetchObservingInstructorsByCourse;
- (void)fetchObservingInstructorsByCourseOperationDidFinish:(id)a0;
- (id)instructorIdentifiersByCourseIdentifier;

@end
