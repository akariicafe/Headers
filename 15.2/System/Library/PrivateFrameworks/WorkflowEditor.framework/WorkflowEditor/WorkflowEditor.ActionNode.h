@class NSString;

@interface WorkflowEditor.ActionNode : WorkflowEditor.EditorNode {
    void /* unknown type, empty encoding */ action;
}

@property (nonatomic, readonly) NSString *nodeDescription;

- (void).cxx_destruct;
- (id)initWithRepresentedObject:(id)a0;

@end
