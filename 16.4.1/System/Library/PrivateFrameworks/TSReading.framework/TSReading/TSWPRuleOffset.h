@interface TSWPRuleOffset : NSObject <NSCopying>

@property (readonly, nonatomic) double dX;
@property (readonly, nonatomic) double dY;

+ (id)ruleOffset;

- (struct CGPoint { double x0; double x1; })pointValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (struct CGSize { double x0; double x1; })sizeValue;
- (id)initWithDX:(double)a0 dY:(double)a1;

@end
