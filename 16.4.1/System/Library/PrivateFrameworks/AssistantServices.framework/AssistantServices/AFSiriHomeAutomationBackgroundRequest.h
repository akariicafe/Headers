@class AFSiriHomeAutomationRequestInfo, AFInstanceContext;

@interface AFSiriHomeAutomationBackgroundRequest : NSObject <AFSiriExternalRequest> {
    AFSiriHomeAutomationRequestInfo *_requestInfo;
    AFInstanceContext *_instanceContext;
}

- (void)performRequestWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithRequestInfo:(id)a0;
- (id)initWithRequestInfo:(id)a0 instanceContext:(id)a1;

@end
