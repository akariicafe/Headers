@class NSMapTable;

@interface CRKASMTimeoutRosterProvider : CRKASMRosterProviderDecoratorBase

@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) NSMapTable *completionsByTimer;

- (void).cxx_destruct;
- (void)dealloc;
- (void)createCourseWithProperties:(id)a0 completion:(id /* block */)a1;
- (void)updateCourseWithIdentifier:(id)a0 properties:(id)a1 completion:(id /* block */)a2;
- (void)timeoutDidFire:(id)a0;
- (id)initWithRosterProvider:(id)a0 timeout:(double)a1;
- (id)scheduleTimeoutForCompletion:(id /* block */)a0;
- (void)operationDidFinishWithTimer:(id)a0 error:(id)a1;
- (void)removeCourseWithIdentifier:(id)a0 completion:(id /* block */)a1;

@end
