@class NSString, NSData;

@interface HDCodableProvenance : PBCodable <NSCopying> {
    struct { unsigned char originMajorVersion : 1; unsigned char originMinorVersion : 1; unsigned char originPatchVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOriginBuild;
@property (retain, nonatomic) NSString *originBuild;
@property (readonly, nonatomic) BOOL hasSourceUUID;
@property (retain, nonatomic) NSData *sourceUUID;
@property (readonly, nonatomic) BOOL hasDeviceUUID;
@property (retain, nonatomic) NSData *deviceUUID;
@property (readonly, nonatomic) BOOL hasSourceVersion;
@property (retain, nonatomic) NSString *sourceVersion;
@property (readonly, nonatomic) BOOL hasOriginProductType;
@property (retain, nonatomic) NSString *originProductType;
@property (readonly, nonatomic) BOOL hasTimeZoneName;
@property (retain, nonatomic) NSString *timeZoneName;
@property (nonatomic) BOOL hasOriginMajorVersion;
@property (nonatomic) int originMajorVersion;
@property (nonatomic) BOOL hasOriginMinorVersion;
@property (nonatomic) int originMinorVersion;
@property (nonatomic) BOOL hasOriginPatchVersion;
@property (nonatomic) int originPatchVersion;
@property (readonly, nonatomic) BOOL hasContributorUUID;
@property (retain, nonatomic) NSData *contributorUUID;

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
- (id)decodedSourceUUID;
- (id)decodedDeviceUUID;

@end
