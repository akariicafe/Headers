@interface NSWeakObjectValue : NSValue {
    void *_value;
    id _object;
    BOOL _useFallback;
}

- (const char *)objCType;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (BOOL)isEqualToValue:(id)a0;
- (void)getValue:(void *)a0;
- (id)initWithObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)nonretainedObjectValue;
- (id)weakObjectValue;
- (unsigned long long)hash;
- (void)dealloc;

@end
