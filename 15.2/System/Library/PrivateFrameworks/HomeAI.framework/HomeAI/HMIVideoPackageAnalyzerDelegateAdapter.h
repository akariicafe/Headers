@interface HMIVideoPackageAnalyzerDelegateAdapter : HMFObject <HMIVideoPackageAnalyzerDelegate>

@property (copy) id /* block */ packageAnalyzerDidDetectPackages;

- (void).cxx_destruct;
- (void)packageAnalyzer:(id)a0 didDetectPackagesWithResult:(id)a1 error:(id)a2;

@end
