@class NSObject;
@protocol OS_dispatch_workloop;

@interface RBSWorkloop : NSObject {
    NSObject<OS_dispatch_workloop> *_calloutWorkloop;
    NSObject<OS_dispatch_workloop> *_backgroundWorkloop;
    NSObject<OS_dispatch_workloop> *_syncingWorkloop;
}

+ (id)sharedBackgroundWorkloop;
+ (id)createCalloutQueue:(id)a0;
+ (id)createSyncingQueue:(id)a0;
+ (void)performBackgroundWork:(id /* block */)a0;
+ (void)performCalloutWithServiceClass:(unsigned int)a0 block:(id /* block */)a1;
+ (id)createBackgroundQueue:(id)a0;
+ (void)performCallout:(id /* block */)a0;
+ (id)sharedCalloutWorkloop;
+ (void)performBackgroundWorkWithServiceClass:(unsigned int)a0 block:(id /* block */)a1;

- (void).cxx_destruct;

@end
