@interface PKFloatRange : NSObject <NSCopying>

@property (readonly, nonatomic) double lowerBound;
@property (readonly, nonatomic) double upperBound;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithLowerBound:(double)a0 upperBound:(double)a1;

@end
