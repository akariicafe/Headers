@class UILabel, _UIBackdropView, NSTimer;

@interface UIWebPDFLabelView : UIView {
    UILabel *_label;
    _UIBackdropView *_backdropView;
    NSTimer *_timer;
}

@property (readonly, nonatomic, getter=isTimerInstalled) BOOL timerInstalled;
@property (nonatomic) unsigned long long currentPageIndex;

- (void)sizeToFit;
- (void)dealloc;
- (void)showNowInSuperView:(id)a0 atOrigin:(struct CGPoint { double x0; double x1; })a1 withText:(id)a2 animated:(BOOL)a3;
- (double)_fadeOutDuration;
- (void)_makeRoundedCorners;
- (double)_fadeOutDelay;
- (void)_fadeOutAnimationDidStop;
- (void)fadeOut;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void)clearTimer;

@end
