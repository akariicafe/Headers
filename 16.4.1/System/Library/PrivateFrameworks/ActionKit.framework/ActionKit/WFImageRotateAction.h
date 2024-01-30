@interface WFImageRotateAction : WFAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (BOOL)isProgressIndeterminate;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)rotateImage:(id)a0 byDegrees:(double)a1 completion:(id /* block */)a2;
- (void)rotateMovie:(id)a0 byDegrees:(double)a1 completion:(id /* block */)a2;

@end
