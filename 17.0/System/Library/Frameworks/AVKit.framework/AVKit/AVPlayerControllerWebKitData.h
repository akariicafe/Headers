@class AVPlayerController;
@protocol AVPlayerControllerWebKitDelegate;

@interface AVPlayerControllerWebKitData : NSObject {
    AVPlayerController *_playerController;
}

@property (nonatomic, getter=isScrubbing) BOOL scrubbing;
@property (nonatomic) double seekToTime;
@property (weak, nonatomic) id<AVPlayerControllerWebKitDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithPlayerController:(id)a0;

@end
