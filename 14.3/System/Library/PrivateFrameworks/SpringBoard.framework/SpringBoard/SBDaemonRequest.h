@interface SBDaemonRequest : NSObject

@property (copy, nonatomic) id /* block */ enabler;
@property (copy, nonatomic) id /* block */ disabler;

+ (id)requestWithEnabler:(id /* block */)a0 disabler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)dispatchEnablerOnQueue:(id)a0;
- (void)dispatchDisablerOnQueue:(id)a0;

@end
