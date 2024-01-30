@class DIXPCConnectionManager;
@protocol DIAudioPowerControllerDelegate;

@interface DIAudioPowerController : NSObject <DIAudioPowerDelegate, DIXPCManagerCheckInObserver>

@property (readonly, weak, nonatomic) DIXPCConnectionManager *connectionManager;
@property (weak, nonatomic) id<DIAudioPowerControllerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)didUpdateAudioPower:(float)a0;
- (id)initWithConnectionManager:(id)a0;
- (void)xpcManagerDidPerformDaemonCheckIn:(id)a0;

@end
