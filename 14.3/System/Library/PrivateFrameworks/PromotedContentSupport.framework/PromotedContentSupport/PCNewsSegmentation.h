@class NSNumber, NSDate;

@interface PCNewsSegmentation : NSObject

@property (class, readonly, nonatomic) NSDate *lastUpdate;
@property (class, readonly, nonatomic) NSNumber *ageGroup;
@property (class, readonly, nonatomic) NSNumber *gender;

+ (void)_updateValues;
+ (void)addClientToSegments:(id)a0 replaceExisting:(BOOL)a1 privateSegment:(BOOL)a2;
+ (id)segmentData;
+ (id)_classProperties;

@end
