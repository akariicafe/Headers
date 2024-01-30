@interface BBColor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double red;
@property (readonly, nonatomic) double green;
@property (readonly, nonatomic) double blue;
@property (readonly, nonatomic) double alpha;

+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;

- (id)awakeAfterUsingCoder:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
