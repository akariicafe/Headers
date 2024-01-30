@class _UITextFieldImageBackgroundView;

@interface _UITextFieldImageBackgroundProvider : _UITextFieldViewBackgroundProvider {
    _UITextFieldImageBackgroundView *_backgroundView;
}

- (void)layoutIfNeeded;
- (void).cxx_destruct;
- (id)backgroundView;
- (void)setNeedsDisplay;
- (void)enabledDidChangeAnimated:(BOOL)a0;
- (void)_applyCorrectImage;
- (void)addToTextField:(id)a0;

@end
