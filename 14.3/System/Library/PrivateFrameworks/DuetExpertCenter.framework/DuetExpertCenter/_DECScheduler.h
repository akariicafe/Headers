@class NSObject;
@protocol OS_xpc_object;

@interface _DECScheduler : NSObject {
    NSObject<OS_xpc_object> *_executionCriteria;
}

@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (void)forceRun;
- (id)initWithActivityIdentifier:(id)a0 andExecutionCriteria:(id)a1;

@end
