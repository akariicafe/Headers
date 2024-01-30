@class AFSiriIncomingCall;

@interface AFSiriAnnounceIncomingCallRequest : NSObject <AFSiriExternalRequest> {
    AFSiriIncomingCall *_call;
}

- (void)performRequestWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithIncomingCall:(id)a0;

@end
