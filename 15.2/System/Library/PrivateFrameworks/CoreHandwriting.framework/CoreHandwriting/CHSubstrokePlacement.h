@class CHSubstroke;

@interface CHSubstrokePlacement : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) CHSubstroke *substroke;
@property (nonatomic) struct CGVector { double dx; double dy; } writingOrientation;
@property (nonatomic) struct CGVector { double dx; double dy; } strokeDeviation;
@property (nonatomic) long long originalWritingDirectionIndex;
@property (nonatomic) struct CGPoint { double x; double y; } coalescedCenter;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rotatedBounds;

- (void)encodeWithCoder:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })orientationTransform;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })orientedBounds;
- (id)initWithSubstroke:(id)a0;

@end
