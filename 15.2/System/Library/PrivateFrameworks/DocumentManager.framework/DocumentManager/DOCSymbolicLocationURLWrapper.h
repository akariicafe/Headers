@interface DOCSymbolicLocationURLWrapper : FPSandboxingURLWrapper <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long symbolicLocation;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSymbolicLocation:(unsigned long long)a0;

@end
