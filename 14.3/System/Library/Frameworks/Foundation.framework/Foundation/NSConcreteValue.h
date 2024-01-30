@interface NSConcreteValue : NSValue {
    unsigned long long _specialFlags;
    void *typeInfo;
}

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (BOOL)isEqualToValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const char *)objCType;
- (BOOL)_matchType:(const char *)a0 size:(unsigned long long)a1 strict:(BOOL)a2;
- (void)getValue:(void *)a0;
- (unsigned long long)hash;
- (id)description;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (const void *)_value;
- (void)encodeWithCoder:(id)a0;

@end
