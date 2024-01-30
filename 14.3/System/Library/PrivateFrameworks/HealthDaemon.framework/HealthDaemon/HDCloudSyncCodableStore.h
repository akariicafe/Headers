@class NSString, NSData;

@interface HDCloudSyncCodableStore : PBCodable <NSCopying> {
    struct { unsigned char order : 1; unsigned char deviceMode : 1; unsigned char requiredProtocolVersion : 1; unsigned char supportedProtocolVersion : 1; unsigned char active : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOwnerIdentifier;
@property (retain, nonatomic) NSString *ownerIdentifier;
@property (readonly, nonatomic) BOOL hasPendingOwnerIdentifier;
@property (retain, nonatomic) NSString *pendingOwnerIdentifier;
@property (nonatomic) BOOL hasOrder;
@property (nonatomic) long long order;
@property (readonly, nonatomic) BOOL hasStoreIdentifier;
@property (retain, nonatomic) NSData *storeIdentifier;
@property (nonatomic) BOOL hasActive;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL hasDeviceMode;
@property (nonatomic) int deviceMode;
@property (nonatomic) BOOL hasSupportedProtocolVersion;
@property (nonatomic) int supportedProtocolVersion;
@property (nonatomic) BOOL hasRequiredProtocolVersion;
@property (nonatomic) int requiredProtocolVersion;
@property (readonly, nonatomic) BOOL hasSystemBuildVersion;
@property (retain, nonatomic) NSString *systemBuildVersion;
@property (readonly, nonatomic) BOOL hasProductType;
@property (retain, nonatomic) NSString *productType;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)deviceModeAsString:(int)a0;
- (int)StringAsDeviceMode:(id)a0;
- (id)supportedProtocolVersionAsString:(int)a0;
- (int)StringAsSupportedProtocolVersion:(id)a0;
- (id)requiredProtocolVersionAsString:(int)a0;
- (int)StringAsRequiredProtocolVersion:(id)a0;

@end
