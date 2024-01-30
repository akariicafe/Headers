@class SVXActivationContext, SVXDeactivationContext;

@interface SVXSessionOperation : NSObject {
    long long _type;
    SVXActivationContext *_activationContext;
    id /* block */ _activationCompletion;
    SVXDeactivationContext *_deactivationContext;
    id /* block */ _deactivationCompletion;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)handleOperationUsingActivationBlock:(id /* block */)a0 deactivationBlock:(id /* block */)a1;
- (id)initWithActivationContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithDeactivationContext:(id)a0 completion:(id /* block */)a1;

@end
