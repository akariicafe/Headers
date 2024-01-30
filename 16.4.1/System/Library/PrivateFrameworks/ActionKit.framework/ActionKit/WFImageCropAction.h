@interface WFImageCropAction : WFAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;
+ (id)imageByCroppingImage:(id)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void)runAsynchronouslyWithInput:(id)a0;

@end
