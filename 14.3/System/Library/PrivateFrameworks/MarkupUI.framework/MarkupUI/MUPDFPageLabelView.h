@class UIBlurEffect, UIVisualEffectView, NSTimer, UILabel;

@interface MUPDFPageLabelView : UIView {
    UILabel *_label;
    UIVisualEffectView *_blurView;
    UIBlurEffect *_blurEffect;
    NSTimer *_timer;
}

@property (readonly, nonatomic, getter=isTimerInstalled) BOOL timerInstalled;
@property (nonatomic) unsigned long long currentPageIndex;

- (void).cxx_destruct;
- (void)sizeToFit;
- (void)dealloc;
- (void)showNowInSuperView:(id)a0 atOrigin:(struct CGPoint { double x0; double x1; })a1 withText:(id)a2 animated:(BOOL)a3;
- (double)_fadeOutDuration;
- (double)_fadeOutDelay;
- (void)fadeOut;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void)clearTimer;

@end
