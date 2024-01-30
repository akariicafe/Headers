@class NSString, HKDevice;

@interface _HDAggregationStateKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *collectorIdentifier;
@property (readonly, copy, nonatomic) HKDevice *device;

+ (id)keyForCollector:(id)a0 device:(id)a1 aggregator:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
