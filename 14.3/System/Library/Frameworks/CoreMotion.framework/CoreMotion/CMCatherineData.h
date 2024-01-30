@interface CMCatherineData : CMLogItem

@property (readonly, nonatomic) double catherine;
@property (readonly, nonatomic) double confidence;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCatherine:(double)a0 confidence:(double)a1 timestamp:(double)a2;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
