@class NSUUID, NSDate, NSNumber, NWActivityMetricData;

@interface NWActivityFragment : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NWActivityMetricData *metricData;
@property (copy, nonatomic) NSNumber *type;

+ (id)entityName;

@end
