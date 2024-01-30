@interface _LSQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isLegacy) BOOL legacy;

- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (BOOL)_canResolveLocallyWithoutMappingDatabase;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (void)encodeWithCoder:(id)a0;
- (id)resolveExpensiveQueryRemotelyUsingResolver:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)_remoteResolutionIsExpensive;

@end
