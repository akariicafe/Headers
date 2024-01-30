@class _UIMotionEffectAcceleratedOutputRange;

@interface _UIViewerRelativeDevicePose : NSObject <NSCopying, NSCoding> {
    _UIMotionEffectAcceleratedOutputRange *_acceleratedOutputRange;
}

@property (nonatomic) struct UIOffset { double horizontal; double vertical; } viewerOffset;
@property (nonatomic) double planarRotationAngle;

- (void)_reset;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setAcceleration:(struct CGPoint { double x0; double x1; })a0 fixingOutputForViewerOffset:(struct UIOffset { double x0; double x1; })a1;
- (id)_acceleratedOutputRange;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (struct UIOffset { double x0; double x1; })_acceleratedOutputForViewerOffset:(struct UIOffset { double x0; double x1; })a0 accelerationBoostFactor:(struct CGPoint { double x0; double x1; })a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
