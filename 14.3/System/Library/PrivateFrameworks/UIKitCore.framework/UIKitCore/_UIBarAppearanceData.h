@interface _UIBarAppearanceData : NSObject <NSCopying> {
    BOOL _immutable;
}

+ (id)decodeFromCoder:(id)a0 prefix:(id)a1;

- (BOOL)checkEqualTo:(id)a0;
- (id)writableInstance;
- (void)encodeToCoder:(id)a0 prefix:(id)a1;
- (void)describeInto:(id)a0;
- (id)replicate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)markReadOnly;
- (void)assertMutable:(SEL)a0;
- (long long)hashInto:(long long)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
