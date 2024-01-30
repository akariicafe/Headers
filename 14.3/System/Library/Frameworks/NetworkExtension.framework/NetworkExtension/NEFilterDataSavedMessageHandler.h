@interface NEFilterDataSavedMessageHandler : NSObject

@property (readonly, nonatomic) id /* block */ getVerdict;
@property (readonly, nonatomic) id /* block */ handleVerdict;

- (void).cxx_destruct;
- (void)executeVerdictHandlerWithFlow:(id)a0 verdict:(id)a1 context:(id)a2;
- (void)executeWithFlow:(id)a0 context:(id)a1;
- (id)initWithGetVerdictBlock:(id /* block */)a0 handleVerdictBlock:(id /* block */)a1;
- (void)enqueueWithFlow:(id)a0 context:(id)a1;

@end
