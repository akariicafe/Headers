@interface _SFECKeySpecifier : _SFAsymmetricKeySpecifier {
    id _ecKeySpecifierInternal;
}

@property long long curve;

+ (BOOL)supportsSecureCoding;
+ (Class)keyClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithCurve:(long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
