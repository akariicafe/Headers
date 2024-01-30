@interface TSUPair : NSObject <NSCopying, NSMutableCopying, NSCoding> {
    id mFirst;
    id mSecond;
}

+ (id)pairWithPair:(id)a0;
+ (id)pair;
+ (id)pairWithFirst:(id)a0 second:(id)a1;

- (id)second;
- (id)initWithFirst:(id)a0 second:(id)a1;
- (id)first;
- (id)init;
- (id)initWithPair:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)p_SetFirst:(id)a0;
- (void)p_SetSecond:(id)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
