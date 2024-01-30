@class NSMutableSet;

@interface ISLivePhotoPlaybackFilter : ISObservable

@property (nonatomic, setter=_setPerformingInputChanges:) BOOL isPerformingInputChanges;
@property (nonatomic, getter=isPlaybackDisabled, setter=_setPlaybackDisabled:) BOOL playbackDisabled;
@property (readonly, nonatomic) NSMutableSet *_playbackDisabledReasons;
@property (readonly, nonatomic) double hintProgress;
@property (readonly, nonatomic) long long state;
@property (nonatomic) BOOL playIsSticky;

- (id)mutableChangeObject;
- (void)_setState:(long long)a0;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)setPlaybackDisabled:(BOOL)a0 forReason:(id)a1;
- (void)setHintProgress:(double)a0;

@end
