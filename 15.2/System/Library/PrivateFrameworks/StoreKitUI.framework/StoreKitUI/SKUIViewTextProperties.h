@interface SKUIViewTextProperties : NSObject <NSCopying>

@property (nonatomic) double baselineOffsetFromBottom;
@property (nonatomic) double desiredOffsetTop;
@property (nonatomic) double firstBaselineOffset;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStringLayout:(id)a0;
- (id)initWithTextLayout:(id)a0 isExpanded:(BOOL)a1;

@end
