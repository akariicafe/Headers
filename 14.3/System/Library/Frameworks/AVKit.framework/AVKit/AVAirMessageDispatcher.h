@class NSString, NSNetService, AVBonjourServiceClient, AVAirTransport;
@protocol AVAirMessageDispatcherClientDelegate;

@interface AVAirMessageDispatcher : NSObject <AVBonjourServiceClientDelegate, AVAirTransportDelegate>

@property (retain, nonatomic) AVAirTransport *channel;
@property (readonly, nonatomic) AVBonjourServiceClient *bonjourServiceClient;
@property (weak, nonatomic) id<AVAirMessageDispatcherClientDelegate> delegate;
@property (retain, nonatomic) NSNetService *currentNetService;
@property (readonly, nonatomic) BOOL haveAirPlayService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isDispatcherEnabled;
+ (id)shared;

- (void)didConnectToBonjourService:(id)a0 channel:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)airTransportOutputDidOpen:(id)a0;
- (void)airTransport:(id)a0 didReceiveObject:(id)a1;
- (void)airTransportInputDidClose:(id)a0;
- (void)sendMessage:(id)a0 completion:(id /* block */)a1;

@end
