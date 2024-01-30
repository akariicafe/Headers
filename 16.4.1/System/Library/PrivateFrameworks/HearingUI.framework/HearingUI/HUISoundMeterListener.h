@protocol HUISoundMeterListenerDelegate;

@interface HUISoundMeterListener : NSObject

@property (weak, nonatomic) id<HUISoundMeterListenerDelegate> delegate;
@property (nonatomic) BOOL isListeningForLocalLevels;
@property (nonatomic) BOOL isListeningForRemoteLevels;
@property (nonatomic) BOOL areLocalLevelsAvailable;
@property (nonatomic) BOOL areRemoteLevelsAvailable;
@property (nonatomic) unsigned long long source;

- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (void)_startLocalLevels;
- (void)_startRemoteLevels;
- (void)_stopLocalLevels;
- (void)_stopRemoteLevels;
- (void)_updateSoundMeterAvailableLocally:(BOOL)a0 remotely:(BOOL)a1;
- (id)initWithDelgate:(id)a0 source:(unsigned long long)a1;

@end
