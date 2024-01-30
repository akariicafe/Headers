@class NSDictionary, UIResponder, WFWorkflow;

@interface WFComposeUserActivityManager : NSObject

@property (readonly, nonatomic) WFWorkflow *workflow;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (weak, nonatomic) UIResponder *responder;
@property (nonatomic, getter=isActive) BOOL active;

- (void)updateUserActivityState:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithWorkflow:(id)a0 targetResponder:(id)a1;

@end
