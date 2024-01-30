@class UITextFieldBackgroundView;

@interface _UITextFieldSystemBackgroundProvider : _UITextFieldViewBackgroundProvider {
    UITextFieldBackgroundView *_systemBackgroundView;
}

+ (id)systemStyleMetricsProvider;

- (void)_buildDescription:(id)a0;
- (id)overridingSetBackgroundColor:(id)a0;
- (void)removeFromTextField;
- (long long)associatedBorderStyle;
- (void)addToTextField:(id)a0;
- (id)backgroundView;
- (void)setProgress:(double)a0;
- (void)enabledDidChangeAnimated:(BOOL)a0;
- (id)preferredMetricsProvider;
- (Class)systemBackgroundViewClass;
- (void).cxx_destruct;
- (id)overridingGetBackgroundColor;

@end
