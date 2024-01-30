@class DIAudioPowerController, NSUUID, DIDropInSessionManager, DIAudioSystemController, DIDeviceManager, DIXPCConnectionManager;
@protocol DIDropInCenterDelegate;

@interface DIDropInCenter : NSObject <DIXPCManagerDelegate>

@property (readonly, nonatomic) NSUUID *homeIdentifier;
@property (retain, nonatomic) DIDeviceManager *deviceManager;
@property (retain, nonatomic) DIDropInSessionManager *sessionManager;
@property (retain, nonatomic) DIAudioPowerController *audioPowerController;
@property (retain, nonatomic) DIAudioSystemController *audioSystemController;
@property (readonly, nonatomic) DIXPCConnectionManager *connectionManager;
@property (weak, nonatomic) id<DIDropInCenterDelegate> delegate;

+ (id)new;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)createAudioPowerController;
- (id)initWithHomeIdentifier:(id)a0 queue:(id)a1;
- (void)startSessionWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithHomeIdentifier:(id)a0;
- (id)createAudioSystemController;
- (id)initWithNullableHomeIdentifier:(id)a0 queue:(id)a1;
- (void)managerDidInterruptConnection:(id)a0;

@end
