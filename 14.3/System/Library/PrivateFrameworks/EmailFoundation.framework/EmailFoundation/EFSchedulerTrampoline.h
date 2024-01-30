@protocol EFScheduler;

@interface EFSchedulerTrampoline : NSObject {
    id<EFScheduler> _scheduler;
    id _object;
}

+ (id)trampolineWithScheduler:(id)a0 object:(id)a1;

- (void)forwardInvocation:(id)a0;
- (id)_initWithScheduler:(id)a0 object:(id)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (id)debugDescription;

@end
