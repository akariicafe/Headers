@interface _SFRSAKeySpecifier : _SFAsymmetricKeySpecifier {
    id _rsaKeySpecifierInternal;
}

@property (nonatomic) long long bitSize;

+ (BOOL)supportsSecureCoding;
+ (Class)keyClass;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBitSize:(long long)a0;
- (void).cxx_destruct;

@end
