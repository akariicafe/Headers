@protocol ASDTaskScheduler;

@interface ASDLazyPromise : ASDPromise {
    id /* block */ _executor;
    id<ASDTaskScheduler> _scheduler;
}

- (id)joinWithPromise:(id)a0;
- (void)thenPerform:(id /* block */)a0 orCatchError:(id /* block */)a1 onScheduler:(id)a2;
- (id)initOnScheduler:(id)a0 withExecutor:(id /* block */)a1;
- (void).cxx_destruct;

@end
