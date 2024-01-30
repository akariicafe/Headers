@class NSMutableArray, NFMutexLock;

@interface FCMultiStepFetchOperation : FCFetchOperation

@property (retain, nonatomic) NSMutableArray *steps;
@property (retain, nonatomic) NSMutableArray *stepResults;
@property (retain, nonatomic) NFMutexLock *accessLock;

- (id)init;
- (void).cxx_destruct;
- (void)customizeChildOperation:(id)a0 forFetchStep:(SEL)a1;
- (void)performOperation;
- (id)completeFetchOperation;
- (void)_performNextStep;
- (void)addFetchStep:(SEL)a0;
- (void)addNonCriticalFetchStep:(SEL)a0;

@end
