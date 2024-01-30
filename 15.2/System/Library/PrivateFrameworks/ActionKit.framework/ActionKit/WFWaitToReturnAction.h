@interface WFWaitToReturnAction : WFAction

@property (nonatomic) int token;

- (void)dealloc;
- (void)runAsynchronouslyWithInput:(id)a0;

@end
