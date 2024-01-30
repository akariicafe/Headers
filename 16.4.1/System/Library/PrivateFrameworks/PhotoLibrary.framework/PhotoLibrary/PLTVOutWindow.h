@class UIView;

@interface PLTVOutWindow : UIWindow {
    UIView *_backgroundView;
    UIView *_videoView;
}

- (id)videoView;
- (void)dealloc;
- (BOOL)setVideoView:(id)a0;
- (id)init;
- (BOOL)_setupTargetScreen:(id)a0;

@end
