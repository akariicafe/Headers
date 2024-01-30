@interface HKRegionAvailabilityMask : NSObject

@property (readonly, nonatomic) unsigned long long bitmask;
@property (readonly, nonatomic) long long group;

+ (id)maskWithBitmask:(unsigned long long)a0 group:(long long)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithBitMask:(unsigned long long)a0 regionGroup:(long long)a1;
- (BOOL)_isEqualToMask:(id)a0;

@end
