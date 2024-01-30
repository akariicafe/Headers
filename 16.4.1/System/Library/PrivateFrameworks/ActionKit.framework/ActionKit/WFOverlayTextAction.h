@interface WFOverlayTextAction : WFAction

@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;

- (id)textAttributes;
- (double)strokeWidth;
- (id)font;
- (id)paragraphStyle;
- (id)textPosition;
- (double)offset;
- (double)fontSize;
- (id)text;
- (id)strokeColor;
- (id)textColor;
- (id)fontDescriptor;
- (long long)textAlignment;
- (double)rotation;
- (double)xPosition;
- (id)parameterKeysIgnoredForParameterSummary;
- (void)runAsynchronouslyWithInput:(id)a0;
- (double)boxWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForImage:(id)a0;
- (id)outlinedTextAttributes;
- (void)overlayImage:(id)a0 inContext:(id)a1;
- (BOOL)strokeEnabled;
- (id)strokeWidthPercentage;
- (BOOL)useProportionalSizing;
- (double)yPosition;

@end
