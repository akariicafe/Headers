@interface _DPRandomizedBit : NSObject

@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) long long value;

+ (id)randomizedBit:(long long)a0 atIndex:(unsigned long long)a1;

- (id)description;
- (id)init;
- (id)initBit:(long long)a0 atIndex:(unsigned long long)a1;

@end
