@class NSNumber, NSData;

@interface UARPManifestProperties : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int boardID;
@property (readonly) unsigned int chipID;
@property (readonly) unsigned long long securityDomain;
@property (readonly) BOOL securityMode;
@property (readonly) BOOL productionMode;
@property (retain) NSNumber *ecID;
@property (copy) NSData *nonce;
@property (retain) NSNumber *chipEpoch;
@property (retain) NSNumber *enableMixMatch;
@property BOOL effectiveProductionMode;
@property BOOL effectiveSecurityMode;
@property BOOL supportsImg4;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBoardID:(unsigned int)a0 chipID:(unsigned int)a1 securityDomain:(unsigned long long)a2 securityMode:(BOOL)a3 productionMode:(BOOL)a4;
- (const char *)securityDomainString;

@end
