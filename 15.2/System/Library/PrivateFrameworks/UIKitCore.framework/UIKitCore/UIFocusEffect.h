@interface UIFocusEffect : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL _isDefaultEffect;

+ (id)effect;

- (BOOL)__isHaloEffect;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
