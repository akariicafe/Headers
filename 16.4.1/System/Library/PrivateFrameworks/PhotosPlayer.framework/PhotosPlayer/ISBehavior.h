@class ISPlayerState;
@protocol ISBehaviorDelegate;

@interface ISBehavior : NSObject

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<ISBehaviorDelegate> delegate;
@property (readonly, nonatomic) ISPlayerState *initialLayoutInfo;
@property (readonly, nonatomic) long long behaviorType;

- (void)resignActive;
- (void)becomeActive;
- (void)videoDidPlayToEnd;
- (void).cxx_destruct;
- (void)activeDidChange;
- (void)setVideoForwardPlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setVideoVolume:(float)a0;
- (id)initWithInitialLayoutInfo:(id)a0;
- (BOOL)prerollVideoAtRate:(float)a0 completionHandler:(id /* block */)a1;
- (BOOL)seekVideoPlayerToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (BOOL)seekVideoPlayerToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (void)setOutputInfo:(id)a0 withTransitionOptions:(id)a1 completion:(id /* block */)a2;
- (void)setVideoPlayRate:(float)a0;
- (void)videoPlayerItemDidChange;
- (void)videoReadyForDisplayDidChange;
- (void)videoWillPlayToEnd;
- (void)videoWillPlayToPhoto;

@end
