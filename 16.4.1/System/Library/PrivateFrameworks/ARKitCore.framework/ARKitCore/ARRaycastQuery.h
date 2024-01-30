@interface ARRaycastQuery : NSObject

@property (readonly, nonatomic) void /* unknown type, empty encoding */ origin;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ direction;
@property (readonly, nonatomic) long long target;
@property (readonly, nonatomic) long long targetAlignment;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithOrigin:(id)a0 direction:(SEL)a1 allowingTarget:(long long)a2 alignment:(long long)a3;

@end
