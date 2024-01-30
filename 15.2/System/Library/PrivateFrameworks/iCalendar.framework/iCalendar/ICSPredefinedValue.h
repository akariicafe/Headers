@interface ICSPredefinedValue : NSNumber {
    long long _value;
}

+ (BOOL)supportsSecureCoding;
+ (id)numberWithLong:(long long)a0;

- (const char *)objCType;
- (long long)longValue;
- (void)getValue:(void *)a0;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLong:(long long)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;

@end
