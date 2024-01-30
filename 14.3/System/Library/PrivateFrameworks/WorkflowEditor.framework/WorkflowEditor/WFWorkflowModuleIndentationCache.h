@class NSLock, NSCountedSet, WFWorkflow;

@interface WFWorkflowModuleIndentationCache : NSObject

@property (readonly, nonatomic) NSLock *lock;
@property (readonly, nonatomic) NSCountedSet *indentationLevels;
@property (readonly, weak, nonatomic) WFWorkflow *workflow;

- (void).cxx_destruct;
- (id)initWithWorkflow:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned long long)indentationLevelForAction:(id)a0;

@end
