@class AFSiriHomeAutomationRequestInfo, AFInstanceContext;

@interface AFSiriHomeAutomationBackgroundRequest : NSObject <AFSiriExternalRequest> {
    AFSiriHomeAutomationRequestInfo *_requestInfo;
    AFInstanceContext *_instanceContext;
}

- (id)initWithRequestInfo:(id)a0 instanceContext:(id)a1;
- (id)initWithRequestInfo:(id)a0;
- (void).cxx_destruct;
- (void)performRequestWithCompletion:(id /* block */)a0;

@end
