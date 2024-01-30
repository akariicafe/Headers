@class NSSet, HMIVideoFrame, NSString;

@interface HMIVideoAnalyzerFrameResult : HMFObject <HMIVideoEvent, HMFLogging, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterest;
@property (readonly) HMIVideoFrame *frame;
@property (readonly) NSSet *events;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)combineFrameResults:(id)a0 withResults:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithFrame:(id)a0 events:(id)a1;
- (id)initWithFrame:(id)a0 events:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)maxConfidenceEventForEventClass:(Class)a0;
- (id)maxConfidenceEvents;
- (id)redactedCopy;

@end
