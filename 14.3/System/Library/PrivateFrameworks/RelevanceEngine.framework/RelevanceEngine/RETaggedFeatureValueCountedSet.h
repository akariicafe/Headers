@interface RETaggedFeatureValueCountedSet : NSObject <NSCopying> {
    struct __CFBag { } *_bag;
}

@property (readonly) unsigned long long count;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)enumerateFeatureValuesUsingBlock:(id /* block */)a0;
- (void)addFeatureValue:(unsigned long long)a0;
- (void)removeFeatureValue:(unsigned long long)a0;
- (unsigned long long)countForFeatureValue:(unsigned long long)a0;
- (BOOL)containsFeatureValue:(unsigned long long)a0;

@end
