@interface WFOutputAction : WFAction

- (id)runSource;
- (unsigned long long)outputBehavior;
- (id)runningContext;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)finishRunningWithOutput:(id)a0 error:(id)a1;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (BOOL)outputSurfaceIsAvailable;
- (BOOL)hasOutputFallback;
- (id)outputVariableString;
- (BOOL)getInputContentFromVariablesInParameterState:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (id)outputContentClasses;

@end
