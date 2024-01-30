@interface WFMakeImageFromPDFPageAction : WFAction

- (void)initializeParameters;
- (id)parameterSummary;
- (void)runAsynchronouslyWithInput:(id)a0;
- (struct CGColorSpace { } *)selectedColorspace;
- (id)selectedFileType;
- (double)selectedResolution;

@end
