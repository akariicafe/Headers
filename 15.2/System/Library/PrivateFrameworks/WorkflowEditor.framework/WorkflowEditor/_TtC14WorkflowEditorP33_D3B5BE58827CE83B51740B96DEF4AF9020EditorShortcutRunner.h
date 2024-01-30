@interface _TtC14WorkflowEditorP33_D3B5BE58827CE83B51740B96DEF4AF9020EditorShortcutRunner : NSObject <WFWorkflowRunnerClientDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ workflow;
    void /* unknown type, empty encoding */ runningState;
    void /* unknown type, empty encoding */ runnerClient;
    void /* unknown type, empty encoding */ actionIndexObservation;
    void /* unknown type, empty encoding */ actionFractionCompletedObservation;
    void /* unknown type, empty encoding */ workflowRunningProgress;
}

- (void).cxx_destruct;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (id)init;
- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;

@end
