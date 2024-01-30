@class LTUIVisualTranslationView, VKCVisualSearchResult, UIView;

@interface VKCImageTranslationView : VKCImageBaseOverlayView

@property (retain, nonatomic) LTUIVisualTranslationView *visualTranslationView;
@property (weak, nonatomic) UIView *presentationAnchorView;
@property BOOL translationNeedsUpdate;
@property (retain, nonatomic) VKCVisualSearchResult *visualSearchResult;

- (void)setRecognitionResult:(id)a0;
- (void)showTranslationOverlay;
- (id)recognizedLines;
- (void)checkForTranslationResultsWithCompletion:(id /* block */)a0;
- (void)hideTranslationOverlay;
- (id)init;
- (void).cxx_destruct;

@end
