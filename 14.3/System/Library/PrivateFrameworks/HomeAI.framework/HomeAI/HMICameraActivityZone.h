@class NSArray, NSString;

@interface HMICameraActivityZone : HMFObject <NSSecureCoding, HMFLogging>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *points;
@property (readonly, getter=isInclusion) BOOL inclusion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)filterEvents:(id)a0 withActivityZones:(id)a1 motionDetection:(id)a2 insetPercentageInclusion:(float)a3 insetPercentageExclusion:(float)a4;
+ (void)generateAndSubmitStats:(id)a0 filteredEvents:(id)a1 motionDetection:(id)a2 activityZones:(id)a3;
+ (void)submitCoreAnalyticsEvent:(id)a0 filteringLevel:(id)a1 numberOfDetectedObjects:(id)a2;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPoints:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPoints:(id)a0 isInclusion:(BOOL)a1;
- (BOOL)saveToJsonActivityZones:(id)a0 motionDetection:(id)a1 videoFragmentUrl:(id)a2 frameId:(id)a3 UUID:(id)a4 detectionID:(id)a5 zoneID:(id)a6;
- (BOOL)overlapsWithElipseInsideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)activityZoneType;
- (BOOL)overlapsWithElipseInsideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withInsetPercentage:(float)a1;
- (BOOL)checkIfObjectIsStaticWithBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 motionDetection:(id)a1 eventClass:(Class)a2;
- (BOOL)containsEvent:(id)a0 withInsetPercentage:(float)a1;
- (id)jsonReperesentaionOfDetectedObject:(id)a0 motionDetection:(id)a1 eventClass:(id)a2;

@end
