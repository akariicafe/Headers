@interface TSWPRuleOffset : NSObject <NSCopying>

@property (readonly, nonatomic) double dX;
@property (readonly, nonatomic) double dY;

+ (id)ruleOffset;

- (struct CGPoint { double x0; double x1; })pointValue;
- (struct CGSize { double x0; double x1; })sizeValue;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDX:(double)a0 dY:(double)a1;

@end
