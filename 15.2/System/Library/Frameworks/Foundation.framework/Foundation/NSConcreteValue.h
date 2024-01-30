@interface NSConcreteValue : NSValue {
    unsigned long long _specialFlags;
    void *typeInfo;
}

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (const char *)objCType;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (BOOL)isEqualToValue:(id)a0;
- (void)getValue:(void *)a0;
- (const void *)_value;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)_matchType:(const char *)a0 size:(unsigned long long)a1 strict:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
