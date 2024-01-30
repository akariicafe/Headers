@interface NSWeakObjectValue : NSValue {
    void *_value;
    id _object;
    BOOL _useFallback;
}

- (const char *)objCType;
- (id)initWithObject:(id)a0;
- (void)getValue:(void *)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (BOOL)isEqualToValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)weakObjectValue;
- (void)dealloc;
- (unsigned long long)hash;
- (id)nonretainedObjectValue;

@end
