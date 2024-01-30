@interface NSWeakObjectValue : NSValue {
    void *_value;
    id _object;
    BOOL _useFallback;
}

- (id)nonretainedObjectValue;
- (BOOL)isEqualToValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObject:(id)a0;
- (void)dealloc;
- (const char *)objCType;
- (id)weakObjectValue;
- (void)getValue:(void *)a0;
- (unsigned long long)hash;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;

@end
