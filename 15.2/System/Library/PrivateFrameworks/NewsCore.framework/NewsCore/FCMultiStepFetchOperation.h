@class NSMutableArray, NFMutexLock;

@interface FCMultiStepFetchOperation : FCFetchOperation

@property (retain, nonatomic) NSMutableArray *steps;
@property (retain, nonatomic) NSMutableArray *stepResults;
@property (retain, nonatomic) NFMutexLock *accessLock;

- (void)performOperation;
- (void).cxx_destruct;
- (id)init;
- (void)_performNextStep;
- (id)completeFetchOperation;
- (void)customizeChildOperation:(id)a0 forFetchStep:(SEL)a1;
- (void)addFetchStep:(SEL)a0;
- (void)addNonCriticalFetchStep:(SEL)a0;

@end
