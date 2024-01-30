@class NSNumber, NSDate;

@interface GKCDIDSInfoList : NSManagedObject

@property (copy, nonatomic) NSNumber *updateIntervalHandlesCount;
@property (copy, nonatomic) NSDate *updateIntervalStartTimeStamp;

+ (id)fetchRequest;

@end
