@class SAClient;
@protocol SAEmergencyResponseDelegate;

@interface SAEmergencyResponseManager : NSObject <SAEmergencyResponseClientProtocol>

@property (readonly, nonatomic) SAClient *client;
@property (weak, nonatomic) id<SAEmergencyResponseDelegate> delegate;

- (void)dialVoiceCallToPhoneNumber:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)updateVoiceCallStatus:(long long)a0;

@end
