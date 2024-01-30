@class UIView;

@interface CKProgressView : UIProgressView

@property (retain, nonatomic) UIView *__ck_progressView;
@property (retain, nonatomic) UIView *__ck_trackView;

- (void)setProgress:(float)a0;
- (void)setTintColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithProgressViewStyle:(long long)a0;
- (void)setProgress:(float)a0 animated:(BOOL)a1;
- (void)setTrackTintColor:(id)a0;
- (void)setUpCKProgressView;
- (void)setUpTrackView;

@end
