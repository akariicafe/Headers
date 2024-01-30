@class NSSet, HMIConfidence, NSDictionary, NSString;

@interface HMIVideoAnalyzerEvent : HMFObject <HMFLogging, NSSecureCoding>

@property (class, readonly) NSSet *eventClasses;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMIConfidence *confidence;
@property (readonly) NSDictionary *userInfo;
@property (readonly) BOOL hasMotionVectors;
@property (readonly) long long confidenceLevel;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)classShortNameStringMap;
+ (id)eventsWithContentsOfFile:(id)a0;

- (void).cxx_destruct;
- (id)shortDescription;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 hasMotionVectors:(BOOL)a2 userInfo:(id)a3;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 hasMotionVectors:(BOOL)a2;

@end
