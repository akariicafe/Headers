@class NSArray, NSString;

@interface HMIVideoAnalyzerEventTrack : HMFObject <HMFLogging, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *trackedEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)matchesEventClass:(Class)a0 withConfidenceLevel:(long long)a1;
- (BOOL)matchesEventClass:(Class)a0 withConfidence:(float)a1;
- (id)initWithTrackedEvents:(id)a0;
- (float)maxIntersectionOverMinAreaWithTrack:(id)a0;
- (float)intersectionOverMinAreaWithTrackedEvent:(id)a0;
- (BOOL)matchesEventClass:(Class)a0;

@end
