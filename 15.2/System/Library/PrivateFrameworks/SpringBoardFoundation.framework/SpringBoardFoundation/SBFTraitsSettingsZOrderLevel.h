@interface SBFTraitsSettingsZOrderLevel : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic) double zOrderLevel;

- (BOOL)isEqualToZOrderLevelSettings:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithZOrderLevelSettings:(id)a0;
- (id)description;
- (id)initWithZOrderLevel:(double)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
