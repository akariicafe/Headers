@class NSTimer, AVQueuePlayer;

@interface NFMPlayCommands : NSObject

@property (retain, nonatomic) NSTimer *flashScheduler;
@property (nonatomic) long long flashCount;
@property (nonatomic) BOOL flashEnabled;
@property (retain, nonatomic) AVQueuePlayer *avQueuePlayer;

- (void)dealloc;
- (id)init;
- (BOOL)_isInternalInstall;
- (void).cxx_destruct;
- (BOOL)_isDeviceLocked;
- (BOOL)_isFaceTimeOrCameraFrontmost;
- (BOOL)_isInFaceTimeCall;
- (void)beginObservingTUChanges;
- (void)cancelAllAlerts:(id)a0;
- (void)flashLED;
- (void)flashLEDIfAppropriate;
- (BOOL)playFindLocallySound;
- (BOOL)playSoundAndFlash;
- (void)playbackStateChanged:(id)a0;
- (void)updateFlashState;

@end
