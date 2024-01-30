@interface ICSPredefinedValue : NSNumber {
    long long _value;
}

+ (id)numberWithLong:(long long)a0;
+ (BOOL)supportsSecureCoding;

- (const char *)objCType;
- (void)getValue:(void *)a0;
- (id)initWithCoder:(id)a0;
- (long long)longValue;
- (id)initWithLong:(long long)a0;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;

@end
