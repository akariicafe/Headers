@class _TtC8FMClient7Session, NSObject;
@protocol OS_dispatch_queue;

@interface FMIPSADevicePlaySound : SADPDevicePlaySound

@property (retain, nonatomic) _TtC8FMClient7Session *clientSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *commandQueue;

- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invalidateClientSession;
- (void)initializePlay;
- (void)performPlaySoundWithCompletion:(id /* block */)a0;
- (BOOL)requiredFieldsPresent:(id)a0;
- (id)playbackDevices:(id)a0;

@end
