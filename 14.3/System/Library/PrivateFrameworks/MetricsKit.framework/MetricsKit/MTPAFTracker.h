@class NSArray, MTPAFActivity;

@interface MTPAFTracker : NSObject

@property (retain, nonatomic) NSArray *videoTrackers;
@property (retain, nonatomic) NSArray *playlistBindings;
@property (retain, nonatomic) MTPAFActivity *currentActivity;

- (void).cxx_destruct;
- (void)synchronizeAtMilliseconds:(unsigned long long)a0;
- (void)updateEventData:(id)a0;
- (void)trackPlaylist:(id)a0 using:(id)a1;
- (void)playStartedWithPlaybackRate:(float)a0 atMilliseconds:(unsigned long long)a1 type:(id)a2 reason:(id)a3 eventData:(id)a4;
- (void)forEachVideoTracker:(id /* block */)a0;
- (void)startActivity:(long long)a0 playbackRate:(float)a1 atMilliseconds:(unsigned long long)a2 triggerType:(id)a3 reason:(id)a4 eventData:(id)a5;
- (void)playStoppedAtMilliseconds:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)stopActivity:(long long)a0 atMilliseconds:(unsigned long long)a1 triggerType:(id)a2 reason:(id)a3 eventData:(id)a4;
- (void)seekStartedAtMilliseconds:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)seekStoppedAtMilliseconds:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)playStartedWithPlaybackRate:(float)a0 atSeconds:(double)a1 type:(id)a2 reason:(id)a3 eventData:(id)a4;
- (void)playStartedAtSeconds:(double)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)playStartedAtMilliseconds:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)playStoppedAtSeconds:(double)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)seekStartedAtSeconds:(double)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)seekStoppedAtSeconds:(double)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)synchronizeAtSeconds:(double)a0;

@end
