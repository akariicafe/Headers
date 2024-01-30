@interface WorkflowEditor.ActionParameterStateStore : NSObject <WFActionEventObserver> {
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ parameters;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;

@end
