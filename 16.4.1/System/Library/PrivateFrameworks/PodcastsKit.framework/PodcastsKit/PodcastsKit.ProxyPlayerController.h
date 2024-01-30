@class PKDurationSnapshot;

@interface PodcastsKit.ProxyPlayerController : NSObject <MPRequestResponseControllerDelegate, PKPlayerController> {
    void /* unknown type, empty encoding */ playerResponseHandler;
    void /* unknown type, empty encoding */ contextExpirationTime;
    void /* unknown type, empty encoding */ contextTuple;
    void /* unknown type, empty encoding */ _currentContentItemIdentifier;
    void /* unknown type, empty encoding */ requestResponseController;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ currentEpisode;
@property (nonatomic, readonly) PKDurationSnapshot *durationSnapshot;
@property (nonatomic, readonly) double forwardJumpDuration;
@property (nonatomic, readonly) double backwardJumpDuration;
@property (nonatomic, copy) id /* block */ playerResponseHandler;

- (void)controller:(id)a0 defersResponseReplacement:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)playWithCompletion:(id /* block */)a0;
- (void)pauseWithCompletion:(id /* block */)a0;
- (void)jumpBackwardsWithCompletion:(id /* block */)a0;
- (void)jumpForwardsWithCompletion:(id /* block */)a0;
- (void)seekToPositionWithElapsedTime:(double)a0 completion:(id /* block */)a1;
- (void)setManifest:(id)a0 startPlayback:(BOOL)a1 completion:(id /* block */)a2;
- (void)startPlayback:(id)a0 completion:(id /* block */)a1;

@end
