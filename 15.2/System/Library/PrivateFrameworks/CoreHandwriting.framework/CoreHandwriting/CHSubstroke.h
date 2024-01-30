@class CHEncodedStrokeIdentifier;

@interface CHSubstroke : NSObject <NSSecureCoding> {
    struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *__begin_; struct CGPoint *__end_; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *__value_; } __end_cap_; } _convexHull;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) CHEncodedStrokeIdentifier *strokeIdentifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) double startTimestamp;
@property (readonly, nonatomic) double endTimestamp;
@property (readonly, nonatomic) double curvature;

+ (id)substrokesForStroke:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void *)convexHull;
- (id)initWithStrokeIdentifier:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startTimestamp:(double)a2 endTimestamp:(double)a3 convexHull:(const void *)a4 curvature:(double)a5;
- (BOOL)isEqualToSubstroke:(id)a0;

@end
