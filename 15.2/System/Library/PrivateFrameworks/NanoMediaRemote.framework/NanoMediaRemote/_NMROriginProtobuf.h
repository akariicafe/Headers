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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
