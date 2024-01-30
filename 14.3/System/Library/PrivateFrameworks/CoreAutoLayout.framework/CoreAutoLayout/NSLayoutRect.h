@class NSLayoutPoint, NSString, NSLayoutYAxisAnchor, NSLayoutDimension, NSLayoutXAxisAnchor;

@interface NSLayoutRect : NSObject <NSCopying, NSCoding> {
    NSLayoutXAxisAnchor *_leadingAnchor;
    NSLayoutYAxisAnchor *_topAnchor;
    NSLayoutDimension *_heightAnchor;
    NSLayoutDimension *_widthAnchor;
    NSString *_name;
    id _reserved1;
}

@property (readonly, copy) NSLayoutYAxisAnchor *topAnchor;
@property (readonly, copy) NSLayoutYAxisAnchor *centerYAnchor;
@property (readonly, copy) NSLayoutYAxisAnchor *bottomAnchor;
@property (readonly, copy) NSLayoutXAxisAnchor *leadingAnchor;
@property (readonly, copy) NSLayoutXAxisAnchor *centerXAnchor;
@property (readonly, copy) NSLayoutXAxisAnchor *trailingAnchor;
@property (readonly, copy) NSLayoutDimension *widthAnchor;
@property (readonly, copy) NSLayoutDimension *heightAnchor;
@property (readonly, copy) NSLayoutPoint *centerLayoutPoint;

+ (id)layoutRectWithLeadingAnchor:(id)a0 topAnchor:(id)a1 trailingAnchor:(id)a2 bottomAnchor:(id)a3;
+ (id)layoutRectWithCenterLayoutPoint:(id)a0 widthAnchor:(id)a1 heightAnchor:(id)a2;
+ (id)layoutRectWithLeadingAnchor:(id)a0 topAnchor:(id)a1 widthAnchor:(id)a2 heightAnchor:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_equationDescriptionInParent;
- (id)ruleEqualToLayoutRect:(id)a0;
- (id)ruleContainingLayoutRect:(id)a0;
- (id)observableValueInItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })valueInItem:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)layoutRectWithName:(id)a0;
- (id)description;
- (id)layoutRectBySlicingWithDimension:(id)a0 fromEdge:(long long)a1;
- (id)layoutRectByInsettingTop:(double)a0 leading:(double)a1 bottom:(double)a2 trailing:(double)a3;
- (id)layoutRectByInsettingTopWithDimension:(id)a0 leadingWithDimension:(id)a1 bottomWithDimension:(id)a2 trailingWithDimension:(id)a3;
- (id)layoutRectBySlicingWithDistance:(double)a0 fromEdge:(long long)a1;
- (id)layoutRectBySlicingWithProportion:(double)a0 fromEdge:(long long)a1;
- (id)constraintsEqualToLayoutRect:(id)a0;
- (id)constraintsContainingWithinLayoutRect:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)nsli_superitem;
- (BOOL)nsli_isLegalConstraintItem;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
