@class _UITextFieldImageBackgroundView;

@interface _UITextFieldImageBackgroundProvider : _UITextFieldViewBackgroundProvider {
    _UITextFieldImageBackgroundView *_backgroundView;
}

- (void)layoutIfNeeded;
- (void)addToTextField:(id)a0;
- (id)backgroundView;
- (void)enabledDidChangeAnimated:(BOOL)a0;
- (void)setNeedsDisplay;
- (void)_applyCorrectImage;
- (void).cxx_destruct;

@end
