@interface HMIVideoPackageAnalyzerDelegateAdapter : HMFObject <HMIVideoPackageAnalyzerDelegate>

@property (copy) id /* block */ packageAnalyzerDidDetectPackage;

- (void).cxx_destruct;
- (void)packageAnalyzer:(id)a0 didDetectPackage:(id)a1 error:(id)a2;

@end
