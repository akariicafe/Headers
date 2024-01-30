@protocol CACDictationRecognizerModeOverlayManagerDelegate;

@interface CACDictationRecognizerModeOverlayManager : CACSimpleContentViewManager

@property (weak, nonatomic) id<CACDictationRecognizerModeOverlayManagerDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)isOverlay;
- (void)showOverlayForDictiationRecognizerMode;

@end
