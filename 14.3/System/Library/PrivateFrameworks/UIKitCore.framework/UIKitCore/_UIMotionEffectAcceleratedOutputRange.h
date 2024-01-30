@interface _UIMotionEffectAcceleratedOutputRange : NSObject <NSCoding, NSCopying> {
    struct UIOffset { double horizontal; double vertical; } _referenceOffset;
    struct CGPoint { double x; double y; } _referenceAcceleration;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } acceleration;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (void)setAcceleration:(struct CGPoint { double x0; double x1; })a0 fixingOutputForViewerOffset:(struct UIOffset { double x0; double x1; })a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (struct UIOffset { double x0; double x1; })acceleratedOutputForViewerOffset:(struct UIOffset { double x0; double x1; })a0 accelerationBoostFactor:(struct CGPoint { double x0; double x1; })a1;
- (void)encodeWithCoder:(id)a0;

@end
