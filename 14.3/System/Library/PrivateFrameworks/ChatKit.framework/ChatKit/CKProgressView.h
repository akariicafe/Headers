@class UIView;

@interface CKProgressView : UIProgressView

@property (retain, nonatomic) UIView *__ck_progressView;
@property (retain, nonatomic) UIView *__ck_trackView;

- (void)setTintColor:(id)a0;
- (void).cxx_destruct;
- (void)setProgress:(float)a0;
- (void)setUpCKProgressView;
- (void)setUpTrackView;
- (id)initWithProgressViewStyle:(long long)a0;
- (void)setTrackTintColor:(id)a0;
- (void)setProgress:(float)a0 animated:(BOOL)a1;

@end
