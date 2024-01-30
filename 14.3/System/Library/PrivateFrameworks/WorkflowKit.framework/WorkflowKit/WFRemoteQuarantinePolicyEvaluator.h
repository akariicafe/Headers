@class NSThread, JSVirtualMachine, NSTimer;
@protocol WFRemoteQuarantinePolicyEvaluatorDelegate;

@interface WFRemoteQuarantinePolicyEvaluator : NSObject

@property (readonly, nonatomic) NSThread *javaScriptEvaluationThread;
@property (retain, nonatomic) JSVirtualMachine *javaScriptVirtualMachine;
@property (readonly, nonatomic) struct __CFRunLoop { } *javaScriptEvaluationThreadRunLoop;
@property (readonly, nonatomic) NSTimer *javaScriptVirtualMachineDestructionTimer;
@property (weak, nonatomic) id<WFRemoteQuarantinePolicyEvaluatorDelegate> delegate;

+ (id)sharedEvaluator;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)evaluatePolicyForRequest:(id)a0 completion:(id /* block */)a1;
- (void)_evaluatePolicyForRequest:(id)a0 completion:(id /* block */)a1;

@end
