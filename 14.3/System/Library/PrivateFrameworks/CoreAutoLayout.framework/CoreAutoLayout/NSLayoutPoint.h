@class NSLayoutXAxisAnchor, NSLayoutYAxisAnchor;

@interface NSLayoutPoint : NSObject <NSCopying, NSCoding>

@property (readonly, copy) NSLayoutXAxisAnchor *xAxisAnchor;
@property (readonly, copy) NSLayoutYAxisAnchor *yAxisAnchor;

+ (id)layoutPointWithXAxisAnchor:(id)a0 yAxisAnchor:(id)a1;
+ (id)pointWithXAxisAnchor:(id)a0 yAxisAnchor:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)ruleEqualToLayoutPoint:(id)a0;
- (struct CGPoint { double x0; double x1; })valueInItem:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)layoutPointByOffsettingWithXOffset:(double)a0 yOffset:(double)a1;
- (id)layoutPointByOffsettingWithXOffsetDimension:(id)a0 yOffsetDimension:(id)a1;
- (id)constraintsEqualToLayoutPoint:(id)a0;
- (id)pointByOffsettingWithXOffset:(double)a0 yOffset:(double)a1;
- (id)pointByOffsettingWithXOffsetDimension:(id)a0 yOffsetDimension:(id)a1;
- (id)constraintsEqualToPoint:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
