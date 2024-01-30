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

+ (BOOL)automaticallyNotifiesObserversOfObservingInstructorsByCourse;
+ (id)keyPathsForValuesAffectingHasObservingInstructors;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)beginObservingEnrollmentStatus;
- (void)connectToStudentdIfNeeded;
- (void)didEstablishStudentConnection:(id)a0;
- (void)didLoseStudentConnection;
- (void)disconnectFromStudentdIfNeeded;
- (void)enrollmentStatusDidChange;
- (void)fetchObservingInstructorsByCourse;
- (void)fetchObservingInstructorsByCourseOperationDidFinish:(id)a0;
- (id)initWithStudentConnectionPrimitives:(id)a0 darwinNotificationPublisher:(id)a1 featureDataStore:(id)a2;
- (id)instructorIdentifiersByCourseIdentifier;

@end
