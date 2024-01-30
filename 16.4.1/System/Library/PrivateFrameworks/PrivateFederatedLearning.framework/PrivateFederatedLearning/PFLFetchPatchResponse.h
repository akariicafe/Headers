@class CKCodeRecordTransport;

@interface PFLFetchPatchResponse : PBCodable <NSCopying> {
    struct { unsigned char modelVersion : 1; } _has;
}

@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) long long modelVersion;
@property (readonly, nonatomic) BOOL hasPatchAsset;
@property (retain, nonatomic) CKCodeRecordTransport *patchAsset;

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
