@class AVPlayerViewController;
@protocol AVMobileFullscreenControllerDelegate;

@interface AVMobileFullscreenController : NSObject {
    AVPlayerViewController *_playerViewController;
}

@property (weak, nonatomic) id<AVMobileFullscreenControllerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long presentationState;

- (void).cxx_destruct;
- (void)enterFullscreen:(id)a0;
- (void)exitFullscreen:(id)a0;
- (id)initWithPlayerViewController:(id)a0;
- (void)updatePresentationStateTo:(unsigned long long)a0;

@end
