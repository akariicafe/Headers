@class NSString, ARLightEstimate;

@interface ARLightEstimationData : NSObject <ARResultData>

@property (retain, nonatomic) ARLightEstimate *lightEstimate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)timestamp;
- (void).cxx_destruct;

@end
