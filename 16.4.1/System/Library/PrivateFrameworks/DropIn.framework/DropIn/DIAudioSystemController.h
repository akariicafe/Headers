@class NSRecursiveLock, DIXPCConnectionManager;
@protocol DIAudioSystemControllerDelegate;

@interface DIAudioSystemController : NSObject <DIAudioStatusDelegate>

@property (readonly, weak, nonatomic) DIXPCConnectionManager *connectionManager;
@property (nonatomic) BOOL needsInitialUplinkMuteStatus;
@property (nonatomic) BOOL needsInitialDownlinkMuteStatus;
@property (readonly, nonatomic) NSRecursiveLock *lock;
@property (weak, nonatomic) id<DIAudioSystemControllerDelegate> delegate;
@property (nonatomic, getter=isUplinkMuted) BOOL uplinkMuted;
@property (nonatomic, getter=isDownlinkMuted) BOOL downlinkMuted;

- (void)dealloc;
- (void).cxx_destruct;
- (void)didUpdateDownlinkMuteStatus:(BOOL)a0;
- (void)didUpdateUplinkMuteStatus:(BOOL)a0;
- (id)initWithConnectionManager:(id)a0;

@end
