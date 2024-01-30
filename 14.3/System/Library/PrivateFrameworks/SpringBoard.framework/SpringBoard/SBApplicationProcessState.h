@class NSString, FBProcessState, FBApplicationProcess;

@interface SBApplicationProcessState : NSObject <BSDescriptionProviding> {
    FBApplicationProcess *_process;
    FBProcessState *_processState;
    BOOL _isBeingDebugged;
}

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (readonly, nonatomic) long long taskState;
@property (readonly, nonatomic) long long visibility;
@property (readonly, nonatomic) BOOL isBeingDebugged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)_initWithProcess:(id)a0 stateSnapshot:(id)a1;

@end
