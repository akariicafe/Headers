@class NSArray, NSString;

@interface HMIVideoAnalyzerResultActivityZoneFilter : HMIVideoAnalyzerResultFilter <HMFLogging>

@property (readonly) NSArray *activityZones;
@property (readonly) NSArray *motionDetections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)applyWithFrameResult:(id)a0;
- (id)initWithActivityZones:(id)a0 motionDetections:(id)a1;

@end
