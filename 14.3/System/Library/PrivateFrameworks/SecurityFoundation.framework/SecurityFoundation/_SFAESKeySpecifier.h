@interface _SFAESKeySpecifier : _SFSymmetricKeySpecifier {
    id _aesKeySpecifierInternal;
}

@property (readonly, nonatomic) long long blockSize;
@property (nonatomic) long long bitSize;

+ (BOOL)supportsSecureCoding;
+ (Class)keyClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBitSize:(long long)a0;
- (long long)keyLengthInBytes;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
