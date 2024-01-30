@interface ARUIRingUniformsCacheKey : NSObject

@property (readonly, nonatomic) unsigned long long hashValue;

+ (id)keyForRing:(id)a0 context:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithRing:(id)a0 context:(id)a1;

@end
