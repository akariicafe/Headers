@class NSString, AFAnalytics, SVXClientServiceConnection;
@protocol SVXPerforming, SVXClientSpeechSynthesisServicing, SVXClientKeepAliveServicing, SVXClientDeviceServicing, SVXClientAudioPowerServicing, SVXClientActivationServicing, SVXClientSessionServicing, SVXClientSessionStateServicing, SVXClientAudioSystemServicing;

@interface SVXClientServiceManager : NSObject <SVXClientServiceConnectionDelegate, SVXClientServiceProviding> {
    id<SVXPerforming> _performer;
    AFAnalytics *_analytics;
    SVXClientServiceConnection *_connection;
}

@property (readonly, nonatomic) id<SVXClientKeepAliveServicing> keepAliveService;
@property (readonly, nonatomic) id<SVXClientActivationServicing> activationService;
@property (readonly, nonatomic) id<SVXClientSessionStateServicing> sessionStateService;
@property (readonly, nonatomic) id<SVXClientSessionServicing> sessionService;
@property (readonly, nonatomic) id<SVXClientAudioPowerServicing> inputAudioPowerService;
@property (readonly, nonatomic) id<SVXClientAudioPowerServicing> outputAudioPowerService;
@property (readonly, nonatomic) id<SVXClientSpeechSynthesisServicing> speechSynthesisService;
@property (readonly, nonatomic) id<SVXClientDeviceServicing> deviceService;
@property (readonly, nonatomic) id<SVXClientAudioSystemServicing> audioSystemService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)_connect;
- (id)init;
- (id)_connection;
- (void).cxx_destruct;
- (id)clientServiceConnection:(id)a0 performerForComponent:(long long)a1;
- (void)clientServiceConnectionDidInvalidate:(id)a0;
- (void)getClientServiceUsingBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;

@end
