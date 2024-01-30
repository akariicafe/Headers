@class NSString, HMITorsoprinter;

@interface HMITorsoClassifier : HMFObject <HMFLogging>

@property (readonly) HMITorsoprinter *torsoprinter;
@property (readonly) double classificationThresholdKnown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)classifyTorsoEvent:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 pixelBuffer:(struct __CVBuffer { } *)a2 homeUUID:(id)a3 error:(id *)a4;

@end
