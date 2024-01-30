@class _UITextFieldImageBackgroundView;

@interface _UITextFieldImageBackgroundProvider : _UITextFieldViewBackgroundProvider {
    _UITextFieldImageBackgroundView *_backgroundView;
}

- (void)layoutIfNeeded;
- (void)addToTextField:(id)a0;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setNeedsDisplay;
- (void)_applyCorrectImage;
- (void)enabledDidChangeAnimated:(BOOL)a0;

@end
