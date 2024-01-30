@interface WFMakeVideoFromGIFAction : WFAction

@property (copy, nonatomic) id /* block */ cancelBlock;

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (void)cancel;
- (void).cxx_destruct;
- (void)runAsynchronouslyWithInput:(id)a0;

@end
