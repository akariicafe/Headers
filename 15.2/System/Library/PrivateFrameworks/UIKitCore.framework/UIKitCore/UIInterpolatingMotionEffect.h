@class NSString;

@interface UIInterpolatingMotionEffect : UIMotionEffect {
    double _horizontalAccelerationBoostFactor;
    double _verticalAccelerationBoostFactor;
}

@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) id minimumRelativeValue;
@property (retain, nonatomic) id maximumRelativeValue;

- (void)_setType:(long long)a0;
- (void)_setHorizontalAccelerationBoostFactor:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKeyPath:(id)a0 type:(long long)a1;
- (double)_horizontalAccelerationBoostFactor;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { double x0; double x1; })a0;
- (id)description;
- (double)_verticalAccelerationBoostFactor;
- (id)_keyPathsAndRelativeValuesForPose:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setVerticalAccelerationBoostFactor:(double)a0;
- (void)_setKeyPath:(id)a0;

@end
