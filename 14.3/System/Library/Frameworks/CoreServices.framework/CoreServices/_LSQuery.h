@interface _LSQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isLegacy) BOOL legacy;

- (BOOL)_canResolveLocallyWithoutMappingDatabase;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
