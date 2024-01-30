@class NSSet, NSArray, HMIConfidence, NSDictionary, NSString;

@interface HMIVideoAnalyzerEvent : HMFObject <HMFLogging, NSSecureCoding>

@property (class, readonly) NSSet *eventClasses;
@property (class, readonly) NSArray *eventClassesArray;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMIConfidence *confidence;
@property (readonly) NSDictionary *userInfo;
@property (readonly) NSArray *allEvents;
@property (readonly) long long confidenceLevel;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)rgbColorCodeForEventClass:(Class)a0;
+ (id)shortNameForEventClass:(Class)a0;
+ (Class)eventClassForShortName:(id)a0;
+ (id)eventConfidenceThresholdsHigh;
+ (id)eventConfidenceThresholdsMedium;
+ (id)defaultConfidenceThresholdsFeedback;
+ (id)eventsWithContentsOfFile:(id)a0;
+ (id)defaultConfidenceThresholdsHigh;
+ (id)defaultConfidenceThresholdsMedium;
+ (id)defaultConfidenceThreshold:(Class)a0 confidenceLevel:(long long)a1;

- (id)shortDescription;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
