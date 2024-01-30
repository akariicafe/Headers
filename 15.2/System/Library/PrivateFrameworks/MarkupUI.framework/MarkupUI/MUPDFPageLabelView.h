@class UIBlurEffect, UIVisualEffectView, NSTimer, UILabel;

@interface MUPDFPageLabelView : UIView {
    UILabel *_label;
    UIVisualEffectView *_blurView;
    UIBlurEffect *_blurEffect;
    NSTimer *_timer;
}

@property (readonly, nonatomic, getter=isTimerInstalled) BOOL timerInstalled;
@property (nonatomic) unsigned long long currentPageIndex;

- (void)clearTimer;
- (double)_fadeOutDelay;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_fadeOutDuration;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)fadeOut;
- (void)showNowInSuperView:(id)a0 withText:(id)a1;

@end
