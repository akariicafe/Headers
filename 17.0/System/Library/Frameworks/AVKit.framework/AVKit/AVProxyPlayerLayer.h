@class UIWindow;

@interface AVProxyPlayerLayer : AVPlayerLayer

@property (retain, nonatomic, setter=avkit_setOriginalWindow:) UIWindow *avkit_originalWindow;
@property (nonatomic, setter=avkit_setIsFullScreen:) BOOL avkit_isFullScreen;

- (id)avkit_window;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avkit_videoRectInWindow;
- (void).cxx_destruct;

@end
