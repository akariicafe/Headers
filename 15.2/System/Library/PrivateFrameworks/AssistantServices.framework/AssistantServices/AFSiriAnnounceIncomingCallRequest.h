@class AFSiriIncomingCall;

@interface AFSiriAnnounceIncomingCallRequest : NSObject <AFSiriExternalRequest> {
    AFSiriIncomingCall *_call;
}

- (id)initWithIncomingCall:(id)a0;
- (void).cxx_destruct;
- (void)performRequestWithCompletion:(id /* block */)a0;

@end
