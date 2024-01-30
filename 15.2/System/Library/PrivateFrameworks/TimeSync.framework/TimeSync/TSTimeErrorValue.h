@interface TSTimeErrorValue : NSObject

@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) long long error;

+ (id)timeErrorSequenceWithTimestamps:(unsigned long long *)a0 timeError:(long long *)a1 count:(long long)a2;

- (id)description;
- (id)initWithTimestamp:(unsigned long long)a0 andError:(long long)a1;

@end
