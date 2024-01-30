@interface AXMEvaluationNode : AXMVisionEngineNode <NSSecureCoding>

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } preferredModelInputSize;
@property (class, readonly, nonatomic, getter=isANEDeviceAvailable) BOOL ANEDeviceAvailable;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long effectivePriority;
@property (nonatomic) double minimumConfidence;
@property (nonatomic) unsigned long long priority;

+ (void)configureForRunningOnANEIfPossibleWithRequest:(id)a0;
+ (unsigned long long)defaultPriority;

- (id)initWithCoder:(id)a0;
- (void)nodeInitialize;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (BOOL)evaluateRequests:(id)a0 withContext:(id)a1 requestHandlerOptions:(id)a2 metrics:(id)a3 error:(id *)a4;
- (id)_diagnosticNameForRequests:(id)a0 metrics:(id)a1;
- (BOOL)shouldEvaluate:(id)a0;
- (void)boostEffectivePriority;
- (void)resetEffectivePriority;
- (void)encodeWithCoder:(id)a0;

@end
