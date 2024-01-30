@class NSString;

@interface _UITextFieldTVBackgroundProvider : _UITextFieldViewBackgroundProvider <_UITextFieldMetricsProvider>

@property (readonly, nonatomic) BOOL shouldExtendCaretHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)backgroundView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicSizeForContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)preferredMetricsProvider;
- (long long)associatedBorderStyle;

@end
