@class UITextFieldBackgroundView;

@interface _UITextFieldSystemBackgroundProvider : _UITextFieldViewBackgroundProvider {
    UITextFieldBackgroundView *_systemBackgroundView;
}

+ (id)systemStyleMetricsProvider;

- (long long)associatedBorderStyle;
- (void)removeFromTextField;
- (void)addToTextField:(id)a0;
- (id)preferredMetricsProvider;
- (id)overridingSetBackgroundColor:(id)a0;
- (void)_buildDescription:(id)a0;
- (id)overridingGetBackgroundColor;
- (id)backgroundView;
- (void)setProgress:(double)a0;
- (void).cxx_destruct;
- (Class)systemBackgroundViewClass;
- (void)enabledDidChangeAnimated:(BOOL)a0;

@end
