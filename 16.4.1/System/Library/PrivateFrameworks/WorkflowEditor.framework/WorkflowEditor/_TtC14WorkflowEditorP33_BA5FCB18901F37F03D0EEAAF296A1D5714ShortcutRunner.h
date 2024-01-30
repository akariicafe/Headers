@interface _TtC14WorkflowEditorP33_BA5FCB18901F37F03D0EEAAF296A1D5714ShortcutRunner : NSObject <WFWorkflowRunnerClientDelegate> {
    void /* unknown type, empty encoding */ workflow;
    void /* unknown type, empty encoding */ onLifecycleEvent;
    void /* unknown type, empty encoding */ _runningState;
    void /* unknown type, empty encoding */ runnerClient;
    void /* unknown type, empty encoding */ isRunning;
    void /* unknown type, empty encoding */ progress;
    void /* unknown type, empty encoding */ progressModeler;
    void /* unknown type, empty encoding */ modelerStateObservation;
}

- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (id)init;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void).cxx_destruct;

@end
