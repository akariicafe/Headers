@class UIBlurEffect, UIVisualEffectView, NSTimer, UILabel;

@interface MUPDFPageLabelView : UIView {
    UILabel *_label;
    UIVisualEffectView *_blurView;
    UIBlurEffect *_blurEffect;
    NSTimer *_timer;
}

@property (readonly, nonatomic, getter=isTimerInstalled) BOOL timerInstalled;
@property (nonatomic) unsigned long long currentPageIndex;

+ (id)sidebarAttributedString;

- (void)clearTimer;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)fadeOut;
- (double)_fadeOutDelay;
- (double)_fadeOutDuration;
- (void)resetFadeOutTimer;
- (void)showNowInSuperView:(id)a0 withText:(id)a1;

@end
