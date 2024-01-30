@class NSString, BSTimer;

@interface STKBaseSound : NSObject <STKSound> {
    BSTimer *_timer;
}

@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BOOL playsOnce;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDuration:(double)a0;
- (void)dealloc;
- (void)playSound;
- (void)stopSound;
- (void)_sync_playSound;
- (void)_sync_stopSound;
- (void)_reallyPlaySound;
- (void)_reallyStopSound;

@end
