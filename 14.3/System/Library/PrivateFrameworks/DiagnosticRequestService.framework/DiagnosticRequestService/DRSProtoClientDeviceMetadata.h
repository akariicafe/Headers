@class NSString;

@interface DRSProtoClientDeviceMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBuildVariant;
@property (retain, nonatomic) NSString *buildVariant;
@property (readonly, nonatomic) BOOL hasDeviceCategory;
@property (retain, nonatomic) NSString *deviceCategory;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) BOOL hasPlatform;
@property (retain, nonatomic) NSString *platform;

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
