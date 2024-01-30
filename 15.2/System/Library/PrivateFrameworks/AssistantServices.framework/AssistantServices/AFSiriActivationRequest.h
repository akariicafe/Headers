@class AFSiriActivationContext;

@interface AFSiriActivationRequest : NSObject <AFSiriExternalRequest> {
    AFSiriActivationContext *_context;
}

- (void)performRequestWithResultHandler:(id /* block */)a0;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)performRequestWithCompletion:(id /* block */)a0;

@end
