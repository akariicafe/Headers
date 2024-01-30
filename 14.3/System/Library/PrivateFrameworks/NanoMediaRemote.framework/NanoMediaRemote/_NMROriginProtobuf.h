@class NSString, NSData;

@interface _NMROriginProtobuf : PBCodable <NSCopying> {
    struct { unsigned char uniqueIdentifier : 1; } _has;
}

@property (nonatomic) BOOL hasUniqueIdentifier;
@property (nonatomic) int uniqueIdentifier;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasDeviceInfoData;
@property (retain, nonatomic) NSData *deviceInfoData;

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

@end
