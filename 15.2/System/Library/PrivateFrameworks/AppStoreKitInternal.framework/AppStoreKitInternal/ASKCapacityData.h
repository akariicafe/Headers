@class NSNumber;

@interface ASKCapacityData : NSObject

@property (retain, nonatomic) NSNumber *totalSystemCapacity;
@property (retain, nonatomic) NSNumber *totalSystemAvailable;
@property (retain, nonatomic) NSNumber *totalDataCapacity;
@property (retain, nonatomic) NSNumber *totalDataAvailable;
@property (retain, nonatomic) NSNumber *totalDiskCapacity;

- (void).cxx_destruct;
- (id)init;

@end
