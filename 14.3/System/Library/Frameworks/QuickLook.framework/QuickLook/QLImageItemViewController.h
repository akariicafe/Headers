@class NSString, UIImageView, QLAnimatedImage;

@interface QLImageItemViewController : QLScrollableContentItemViewController <QLAnimationTimerObserver> {
    UIImageView *_imageView;
    QLAnimatedImage *_animatedImage;
    double _initialTimeStamp;
    double _currentPlaybackTime;
    struct CGSize { double width; double height; } _imageSize;
    BOOL _imageIsAnimated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)draggableView;
- (struct CGSize { double x0; double x1; })imageSize;
- (long long)preferredWhitePointAdaptivityStyle;
- (void).cxx_destruct;
- (void)animationTimerFired:(double)a0;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;

@end
