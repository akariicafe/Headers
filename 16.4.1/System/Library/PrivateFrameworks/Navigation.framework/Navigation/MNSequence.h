@class geo_isolater, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MNSequence : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_steps;
    geo_isolater *_stepsIsolater;
}

- (void)start;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)addStep:(id /* block */)a0;
- (void)_runNextStepWithPreviousStepResult:(id)a0;

@end
