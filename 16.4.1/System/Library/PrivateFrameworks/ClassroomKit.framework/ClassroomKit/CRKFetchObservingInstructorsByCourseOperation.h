@class CATRemoteTaskOperation;
@protocol CRKRequestPerformingProtocol;

@interface CRKFetchObservingInstructorsByCourseOperation : CATOperation

@property (readonly, nonatomic) id<CRKRequestPerformingProtocol> requestPerformer;
@property (retain, nonatomic) CATRemoteTaskOperation *fetchInstructorsOperation;
@property (retain, nonatomic) CATRemoteTaskOperation *fetchCoursesOperation;

- (void)main;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)compileResultsWithFetchCoursesResult:(id)a0 fetchScreenObserversResult:(id)a1;
- (id)initWithRequestPerformer:(id)a0;
- (void)operationsDidComplete:(id)a0;

@end
