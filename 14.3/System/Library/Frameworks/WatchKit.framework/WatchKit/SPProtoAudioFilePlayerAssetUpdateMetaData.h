@class NSString;

@interface SPProtoAudioFilePlayerAssetUpdateMetaData : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; } _has;
}

@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasURL;
@property (retain, nonatomic) NSString *uRL;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasAlbumTitle;
@property (retain, nonatomic) NSString *albumTitle;
@property (readonly, nonatomic) BOOL hasArtist;
@property (retain, nonatomic) NSString *artist;
@property (readonly, nonatomic) BOOL hasSandboxExtensionToken;
@property (retain, nonatomic) NSString *sandboxExtensionToken;

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
