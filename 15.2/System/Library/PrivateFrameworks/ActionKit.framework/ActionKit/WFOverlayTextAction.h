@interface WFOverlayTextAction : WFAction

@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;

- (double)strokeWidth;
- (id)strokeColor;
- (double)rotation;
- (double)fontSize;
- (double)xPosition;
- (id)textAttributes;
- (id)textPosition;
- (id)text;
- (id)paragraphStyle;
- (double)offset;
- (id)fontDescriptor;
- (id)font;
- (id)textColor;
- (long long)textAlignment;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)parameterKeysIgnoredForParameterSummary;
- (id)overlayImage:(id)a0;
- (double)boxWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForImage:(id)a0;
- (id)outlinedTextAttributes;
- (id)strokeWidthPercentage;
- (double)yPosition;
- (BOOL)strokeEnabled;
- (BOOL)useProportionalSizing;

@end
