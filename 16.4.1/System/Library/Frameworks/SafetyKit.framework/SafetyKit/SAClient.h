@class NSObject, NSXPCConnection;
@protocol SAEmergencyResponseClientProtocol, SACrashDetectionClientProtocol, OS_dispatch_queue;

@interface SAClient : NSObject <SAClientProtocol> {
    NSObject<OS_dispatch_queue> *_messageQueue;
    id /* block */ _authenticationRequestHandler;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<SACrashDetectionClientProtocol> crashDetectionClientDelegate;
@property (weak, nonatomic) id<SAEmergencyResponseClientProtocol> emergencyResponseClientDelegate;

+ (id)sharedInstance;

- (id)serverProxy;
- (void)requestMostRecentCrashDetectionEvent;
- (void)requestCrashDetectionAuthorization:(id /* block */)a0;
- (void)setConnection:(id)a0;
- (void)dialVoiceCallToPhoneNumber:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)updateVoiceCallStatus:(long long)a0;
- (void)callAuthenticationRequestHandlerWithError;
- (void)callAuthenticationRequestHandlerWithStatus:(long long)a0 error:(id)a1;
- (void)updateMostRecentCrashDetectionEvent:(id)a0;

@end
