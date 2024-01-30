@class NSArray;

@interface UIMotionEffectGroup : UIMotionEffect

@property (copy, nonatomic) NSArray *motionEffects;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { double x0; double x1; })a0;
- (id)debugDescription;
- (id)_keyPathsAndRelativeValuesForPose:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
