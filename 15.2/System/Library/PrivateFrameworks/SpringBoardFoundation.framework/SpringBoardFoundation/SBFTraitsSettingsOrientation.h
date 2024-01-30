@interface SBFTraitsSettingsOrientation : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic) long long orientation;

- (id)initWithOrientation:(long long)a0;
- (BOOL)isEqualToOrientationSettings:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOrientationSettings:(id)a0;

@end
