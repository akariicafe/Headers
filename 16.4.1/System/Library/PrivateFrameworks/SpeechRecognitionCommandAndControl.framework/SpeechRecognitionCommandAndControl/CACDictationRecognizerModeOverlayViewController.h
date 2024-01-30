@interface CACDictationRecognizerModeOverlayViewController : UIViewController <CACViewController>

@property (readonly, nonatomic) long long zOrder;
@property (readonly, nonatomic) BOOL isOverlay;

- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDictationRecognizerMode:(int)a0;

@end
