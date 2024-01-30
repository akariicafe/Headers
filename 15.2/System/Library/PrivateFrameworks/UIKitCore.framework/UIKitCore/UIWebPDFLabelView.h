@class UILabel, _UIBackdropView, NSTimer;

@interface UIWebPDFLabelView : UIView {
    UILabel *_label;
    _UIBackdropView *_backdropView;
    NSTimer *_timer;
}

@property (readonly, nonatomic, getter=isTimerInstalled) BOOL timerInstalled;
@property (nonatomic) unsigned long long currentPageIndex;

- (void)clearTimer;
- (double)_fadeOutDelay;
- (void)_makeRoundedCorners;
- (void)_fadeOutAnimationDidStop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_fadeOutDuration;
- (void)setText:(id)a0;
- (void)dealloc;
- (void)showNowInSuperView:(id)a0 atOrigin:(struct CGPoint { double x0; double x1; })a1 withText:(id)a2 animated:(BOOL)a3;
- (void)sizeToFit;
- (void)fadeOut;

@end
