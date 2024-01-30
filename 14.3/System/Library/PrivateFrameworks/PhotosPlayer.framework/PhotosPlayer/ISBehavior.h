@class ISPlayerState;
@protocol ISBehaviorDelegate;

@interface ISBehavior : NSObject

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<ISBehaviorDelegate> delegate;
@property (readonly, nonatomic) ISPlayerState *initialLayoutInfo;
@property (readonly, nonatomic) long long behaviorType;

- (void)becomeActive;
- (void).cxx_destruct;
- (void)resignActive;
- (void)activeDidChange;
- (void)setVideoVolume:(float)a0;
- (void)videoWillPlayToEnd;
- (void)videoWillPlayToPhoto;
- (void)videoDidPlayToEnd;
- (void)videoReadyForDisplayDidChange;
- (id)initWithInitialLayoutInfo:(id)a0;
- (void)videoPlayerItemDidChange;
- (void)setOutputInfo:(id)a0 withTransitionOptions:(id)a1 completion:(id /* block */)a2;
- (void)setVideoPlayRate:(float)a0;
- (BOOL)seekVideoPlayerToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (BOOL)seekVideoPlayerToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (BOOL)prerollVideoAtRate:(float)a0 completionHandler:(id /* block */)a1;
- (void)setVideoForwardPlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
