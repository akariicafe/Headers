@class SWPreventSystemSleepAssertion;

@interface NEIKEv2RequestContext : NSObject {
    BOOL _requestInitiator;
    BOOL _preventSleepUntilFinished;
    int _requestType;
    SWPreventSystemSleepAssertion *_powerAssertion;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRequestType:(int)a0;
- (void)sendCallbackSuccess:(BOOL)a0 session:(id)a1;

@end
