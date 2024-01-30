@interface ARUIRingUniformsCacheKey : NSObject

@property (readonly, nonatomic) unsigned long long hashValue;

+ (id)keyForRing:(id)a0 context:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithRing:(id)a0 context:(id)a1;

@end
