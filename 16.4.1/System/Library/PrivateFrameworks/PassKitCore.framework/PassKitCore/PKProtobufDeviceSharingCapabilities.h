@class NSString, NSData;

@interface PKProtobufDeviceSharingCapabilities : PBCodable <NSCopying> {
    struct { unsigned char supportsManatee : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasHandle;
@property (retain, nonatomic) NSString *handle;
@property (readonly, nonatomic) BOOL hasAltDSID;
@property (retain, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) BOOL hasDeviceRegion;
@property (retain, nonatomic) NSString *deviceRegion;
@property (nonatomic) BOOL hasSupportsManatee;
@property (nonatomic) BOOL supportsManatee;
@property (readonly, nonatomic) BOOL hasFromDeviceVersion;
@property (retain, nonatomic) NSData *fromDeviceVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
