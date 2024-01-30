@interface WFMakeImageFromPDFPageAction : WFAction

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)initializeParameters;
- (id)parameterSummary;
- (id)selectedFileType;
- (struct CGColorSpace { } *)selectedColorspace;
- (double)selectedResolution;

@end
