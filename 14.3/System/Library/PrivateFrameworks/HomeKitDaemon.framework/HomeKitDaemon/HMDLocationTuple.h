@class CLLocation, NSDate;

@interface HMDLocationTuple : NSObject

@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) unsigned long long numberOfReachableIPAccessory;
@property (nonatomic) unsigned long long numberOfReachableBTLEAccessory;
@property (nonatomic) unsigned long long numberOfreachableMediaAccessory;
@property (copy, nonatomic) NSDate *date;

+ (id)tupleWithLocation:(id)a0 reachableIPAccessory:(unsigned long long)a1 reachableBTLEAccessory:(unsigned long long)a2 reachableMediaAccessory:(unsigned long long)a3 date:(id)a4;

- (void).cxx_destruct;
- (id)description;

@end
