@class NSString;

@interface _SBFImmediateScheduler : NSObject <SBFScheduler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)performCancelableBlock:(id /* block */)a0;
- (id)performBlock:(id /* block */)a0;

@end
