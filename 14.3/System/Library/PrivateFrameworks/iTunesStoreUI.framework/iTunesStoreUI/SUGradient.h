@class NSArray, NSMutableArray, NSLock;

@interface SUGradient : NSObject <NSSecureCoding, NSCopying> {
    NSMutableArray *_colorStops;
    NSLock *_lock;
    struct SUGradientPoint { struct CGPoint { double x; double y; } point; double radius; } _p0;
    struct SUGradientPoint { struct CGPoint { double x; double y; } point; double radius; } _p1;
    BOOL _sorted;
    long long _type;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long gradientType;
@property (readonly) struct SUGradientPoint { struct CGPoint { double x0; double x1; } x0; double x1; } p0;
@property (readonly) struct SUGradientPoint { struct CGPoint { double x0; double x1; } x0; double x1; } p1;
@property (readonly) NSArray *colorStopColors;
@property (readonly) NSArray *colorStopOffsets;
@property (readonly) long long numberOfColorStops;

+ (id)gradientWithColor:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct CGGradient { } *)copyCGGradient;
- (id)initWithPropertyList:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (void)addColorStopWithOffset:(double)a0 color:(struct CGColor { } *)a1;
- (struct CGShading { } *)copyShading;
- (id)initWithPoint0:(struct SUGradientPoint { struct CGPoint { double x0; double x1; } x0; double x1; })a0 point1:(struct SUGradientPoint { struct CGPoint { double x0; double x1; } x0; double x1; })a1 type:(long long)a2;
- (id)newPatternColorWithSize:(struct CGSize { double x0; double x1; })a0 opaque:(BOOL)a1;

@end
