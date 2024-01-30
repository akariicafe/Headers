@interface ASCContentSkeleton : NSObject <NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double rawValue;

+ (id)absoluteSkeleton:(double)a0;
+ (id)fractionalSkeleton:(double)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (double)widthThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithType:(long long)a0 rawValue:(double)a1;

@end
