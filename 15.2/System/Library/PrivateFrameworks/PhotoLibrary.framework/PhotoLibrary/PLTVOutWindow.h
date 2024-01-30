@class UIView;

@interface PLTVOutWindow : UIWindow {
    UIView *_backgroundView;
    UIView *_videoView;
}

- (BOOL)setVideoView:(id)a0;
- (id)videoView;
- (id)init;
- (void)dealloc;
- (BOOL)_setupTargetScreen:(id)a0;

@end
