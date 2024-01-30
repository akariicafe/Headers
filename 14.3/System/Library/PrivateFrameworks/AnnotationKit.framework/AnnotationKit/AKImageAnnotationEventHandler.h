@interface AKImageAnnotationEventHandler : AKRectangularAnnotationEventHandler

- (void)updateModelWithCurrentPoint:(struct CGPoint { double x0; double x1; })a0 options:(unsigned long long)a1;
- (BOOL)lockAspectRatioByDefault;
- (struct CGSize { double x0; double x1; })naturalSizeForAnnotation;

@end
