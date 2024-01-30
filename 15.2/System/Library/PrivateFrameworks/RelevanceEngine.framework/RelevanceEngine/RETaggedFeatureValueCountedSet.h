@interface RETaggedFeatureValueCountedSet : NSObject <NSCopying> {
    struct __CFBag { } *_bag;
}

@property (readonly) unsigned long long count;

- (void)addFeatureValue:(unsigned long long)a0;
- (unsigned long long)countForFeatureValue:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)removeFeatureValue:(unsigned long long)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsFeatureValue:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)enumerateFeatureValuesUsingBlock:(id /* block */)a0;

@end
