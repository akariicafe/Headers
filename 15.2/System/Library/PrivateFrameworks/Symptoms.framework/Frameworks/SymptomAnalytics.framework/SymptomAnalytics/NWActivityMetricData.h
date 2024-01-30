@class NSData, NSSet;

@interface NWActivityMetricData : NSManagedObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSSet *fragment;

+ (id)entityName;

@end
