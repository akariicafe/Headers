@interface PRChipInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long ECID;
@property (readonly, nonatomic) unsigned short chipID;
@property (readonly, nonatomic) unsigned short boardID;
@property (readonly, nonatomic) unsigned int bootMode;
@property (readonly, nonatomic) unsigned char prodMode;
@property (readonly, nonatomic) unsigned char secureMode;
@property (readonly, nonatomic) unsigned char securityDomain;
@property (readonly, nonatomic) unsigned short chipRevision;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithECID:(unsigned long long)a0 chipID:(unsigned short)a1 boardID:(unsigned short)a2 bootMode:(unsigned int)a3 prodMode:(unsigned char)a4 secureMode:(unsigned char)a5 securityDomain:(unsigned char)a6 chipRevision:(unsigned short)a7;

@end
