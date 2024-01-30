@interface _UIBarAppearanceData : NSObject <NSCopying> {
    BOOL _immutable;
}

+ (id)decodeFromCoder:(id)a0 prefix:(id)a1;

- (long long)hashInto:(long long)a0;
- (void)describeInto:(id)a0;
- (void)assertMutable:(SEL)a0;
- (id)replicate;
- (void)markReadOnly;
- (id)description;
- (BOOL)checkEqualTo:(id)a0;
- (id)writableInstance;
- (void)encodeToCoder:(id)a0 prefix:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
