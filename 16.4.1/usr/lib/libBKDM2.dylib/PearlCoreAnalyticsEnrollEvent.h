@class NSNumber;

@interface PearlCoreAnalyticsEnrollEvent : PearlCoreAnalyticsEvent

@property (retain) NSNumber *glassesDetected;
@property (retain) NSNumber *enrolledTemplateCountType0NoGlasses;
@property (retain) NSNumber *enrolledTemplateCountType0WithGlasses;
@property (retain) NSNumber *enrolledTemplateCountType0Unknown;
@property (retain) NSNumber *enrolledTemplateCountType1NoGlasses;
@property (retain) NSNumber *enrolledTemplateCountType1WithGlasses;
@property (retain) NSNumber *enrolledTemplateCountType1Unknown;

- (id)init;
- (void).cxx_destruct;
- (void)reset;

@end
