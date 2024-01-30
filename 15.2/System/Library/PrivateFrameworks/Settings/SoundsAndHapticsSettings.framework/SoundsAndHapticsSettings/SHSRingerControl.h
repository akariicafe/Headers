@class AVSystemController;
@protocol SHSRingerControlDelegate;

@interface SHSRingerControl : NSObject

@property (retain, nonatomic) AVSystemController *_systemController;
@property (nonatomic) long long _volumeChangeCoalescingCount;
@property (nonatomic) BOOL _volumeInitialized;
@property (nonatomic) BOOL _logFaultCalledForInactive;
@property (nonatomic) BOOL _logFaultCalledForBackground;
@property (weak, nonatomic) id<SHSRingerControlDelegate> delegate;
@property (nonatomic) float volume;
@property (nonatomic) BOOL canChangeRingtoneWithButtons;
@property (nonatomic) BOOL appWantsVolumeChangeEvents;

- (void)_tearDown;
- (void)reload;
- (void)_setup;
- (void).cxx_destruct;
- (id)init;
- (void)_handleServerConnectionDiedNotification:(id)a0;
- (void)dealloc;
- (void)_handleEffectiveVolumeDidChangeNotification:(id)a0;
- (void)_updateVolume:(float)a0;

@end
