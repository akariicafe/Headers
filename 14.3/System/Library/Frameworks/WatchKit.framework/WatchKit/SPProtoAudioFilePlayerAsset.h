@class SPProtoAudioFilePlayerAssetUpdateMetaData, SPProtoObjectMessage;

@interface SPProtoAudioFilePlayerAsset : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUpsertWithMetaData;
@property (retain, nonatomic) SPProtoAudioFilePlayerAssetUpdateMetaData *upsertWithMetaData;
@property (readonly, nonatomic) BOOL hasDestroy;
@property (retain, nonatomic) SPProtoObjectMessage *destroy;

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
- (id)sockPuppetMessage;

@end
