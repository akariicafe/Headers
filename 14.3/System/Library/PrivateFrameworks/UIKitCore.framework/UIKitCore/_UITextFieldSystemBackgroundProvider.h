@class UITextFieldBackgroundView;

@interface _UITextFieldSystemBackgroundProvider : _UITextFieldViewBackgroundProvider {
    UITextFieldBackgroundView *_systemBackgroundView;
}

+ (id)systemStyleMetricsProvider;

- (void).cxx_destruct;
- (id)backgroundView;
- (void)setProgress:(double)a0;
- (void)enabledDidChangeAnimated:(BOOL)a0;
- (id)preferredMetricsProvider;
- (void)addToTextField:(id)a0;
- (long long)associatedBorderStyle;
- (void)_buildDescription:(id)a0;
- (Class)systemBackgroundViewClass;
- (void)removeFromTextField;
- (id)overridingSetBackgroundColor:(id)a0;
- (id)overridingGetBackgroundColor;

@end
