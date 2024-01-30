@class NSData, DRSProtoClientDeviceMetadata, DRSProtoFileDescription, DRSProtoRequestDescription;

@interface DRSProtoRapidPayload : PBCodable <NSCopying> {
    struct { unsigned char uploadAttempts : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDeviceMetadata;
@property (retain, nonatomic) DRSProtoClientDeviceMetadata *deviceMetadata;
@property (readonly, nonatomic) BOOL hasPayloadMetadata;
@property (retain, nonatomic) DRSProtoRequestDescription *payloadMetadata;
@property (readonly, nonatomic) BOOL hasPayloadDescription;
@property (retain, nonatomic) DRSProtoFileDescription *payloadDescription;
@property (nonatomic) BOOL hasUploadAttempts;
@property (nonatomic) unsigned int uploadAttempts;
@property (readonly, nonatomic) BOOL hasPayload;
@property (retain, nonatomic) NSData *payload;

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
