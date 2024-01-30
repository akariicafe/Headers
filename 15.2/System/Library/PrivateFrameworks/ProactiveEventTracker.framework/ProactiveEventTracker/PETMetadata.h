@class NSString;

@interface PETMetadata : PBCodable <NSCopying> {
    struct { unsigned char uploadTime : 1; unsigned char configVersion : 1; unsigned char isConfigEnabled : 1; unsigned char isGm : 1; unsigned char isInternal : 1; unsigned char isInternalCarry : 1; unsigned char isSeed : 1; unsigned char isTestingData : 1; unsigned char isTrialUpload : 1; } _has;
}

@property (nonatomic) BOOL hasUploadTime;
@property (nonatomic) unsigned long long uploadTime;
@property (readonly, nonatomic) BOOL hasPlatform;
@property (retain, nonatomic) NSString *platform;
@property (readonly, nonatomic) BOOL hasDevice;
@property (retain, nonatomic) NSString *device;
@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;
@property (nonatomic) BOOL hasIsInternal;
@property (nonatomic) BOOL isInternal;
@property (nonatomic) BOOL hasIsSeed;
@property (nonatomic) BOOL isSeed;
@property (nonatomic) BOOL hasIsGm;
@property (nonatomic) BOOL isGm;
@property (readonly, nonatomic) BOOL hasCountry;
@property (retain, nonatomic) NSString *country;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) BOOL hasConfigVersion;
@property (nonatomic) unsigned int configVersion;
@property (readonly, nonatomic) BOOL hasPseudoDeviceId;
@property (retain, nonatomic) NSString *pseudoDeviceId;
@property (nonatomic) BOOL hasIsInternalCarry;
@property (nonatomic) BOOL isInternalCarry;
@property (nonatomic) BOOL hasIsConfigEnabled;
@property (nonatomic) BOOL isConfigEnabled;
@property (readonly, nonatomic) BOOL hasMessageGroup;
@property (retain, nonatomic) NSString *messageGroup;
@property (nonatomic) BOOL hasIsTestingData;
@property (nonatomic) BOOL isTestingData;
@property (nonatomic) BOOL hasIsTrialUpload;
@property (nonatomic) BOOL isTrialUpload;

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
