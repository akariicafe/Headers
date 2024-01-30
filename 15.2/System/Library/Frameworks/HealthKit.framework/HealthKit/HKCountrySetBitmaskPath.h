@interface HKCountrySetBitmaskPath : NSObject

@property (readonly, nonatomic) unsigned long long bitmask;
@property (readonly, nonatomic) long long index;

+ (id)pathWithBitmask:(unsigned long long)a0 index:(long long)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
