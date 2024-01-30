@class NSString;

@interface SBFObservable : NSObject <SBFObservable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)observableWithBlock:(id /* block */)a0;
+ (id)forkJoin:(id)a0;

- (id)map:(id /* block */)a0;
- (id)subscribe:(id)a0;
- (id)subscribeWithResultBlock:(id /* block */)a0;
- (id)waitForResults:(id *)a0;
- (id)generate:(id /* block */)a0;
- (id)observeOn:(id)a0;
- (id)subscribeOn:(id)a0;
- (id)subscribeWithResultBlock:(id /* block */)a0 completionBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (id)throttle:(double)a0 onScheduler:(id)a1;

@end
