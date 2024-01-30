@interface PXBarAnimationOptions : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (nonatomic) double duration;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 duration:(double)a1;
- (id)initWithType:(long long)a0;
- (id)description;

@end
