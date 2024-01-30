@interface _SFECKeySpecifier : _SFAsymmetricKeySpecifier {
    id _ecKeySpecifierInternal;
}

@property long long curve;

+ (BOOL)supportsSecureCoding;
+ (Class)keyClass;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCurve:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
