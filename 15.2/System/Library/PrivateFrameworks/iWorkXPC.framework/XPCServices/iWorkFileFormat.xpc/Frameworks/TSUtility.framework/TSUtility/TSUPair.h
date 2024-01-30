@interface TSUPair : NSObject <NSCopying, NSMutableCopying, NSCoding>

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;

+ (id)pair;
+ (id)pairWithFirst:(id)a0 second:(id)a1;
+ (id)pairWithPair:(id)a0;

- (id)initWithFirst:(id)a0 second:(id)a1;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPair:(id)a0;
- (void)p_SetFirst:(id)a0;
- (void)p_SetSecond:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
