@interface RETaggedFeatureValueArray : NSObject <NSCopying> {
    struct __CFArray { } *_array;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long count;

- (id)initWithValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithFeatureValues:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (unsigned long long)_locked_count;
- (unsigned long long)_locked_featureValueAtIndex:(unsigned long long)a0;
- (void)addFeatureValue:(unsigned long long)a0;
- (void)enumerateFeatureValuesUsingBlock:(id /* block */)a0;
- (unsigned long long)featureValueAtIndex:(unsigned long long)a0;
- (unsigned long long)firstFeatureValue;
- (void)insertFeatureValue:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)lastFeatureValue;
- (void)removeAllFeatureValues;
- (void)removeFeatureValueAtIndex:(unsigned long long)a0;
- (void)replaceFeatureValueAtIndex:(unsigned long long)a0 withValue:(unsigned long long)a1;

@end
