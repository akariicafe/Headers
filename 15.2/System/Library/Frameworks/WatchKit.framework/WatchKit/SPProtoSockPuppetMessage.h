@class SPProtoSockPuppetPlist, SPProtoAudioFilePlayerMessage;

@interface SPProtoSockPuppetMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPlist;
@property (retain, nonatomic) SPProtoSockPuppetPlist *plist;
@property (readonly, nonatomic) BOOL hasAudioFilePlayerMessage;
@property (retain, nonatomic) SPProtoAudioFilePlayerMessage *audioFilePlayerMessage;

+ (id)sockPuppetMessageWithSubMessage:(id)a0 setterSelector:(SEL)a1;

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
