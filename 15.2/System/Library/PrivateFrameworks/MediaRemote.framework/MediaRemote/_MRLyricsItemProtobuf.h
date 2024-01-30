@class NSString, _MRLyricsTokenProtobuf;

@interface _MRLyricsItemProtobuf : PBCodable <NSCopying> {
    NSString *_lyrics;
    _MRLyricsTokenProtobuf *_token;
    BOOL _userProvided;
    struct { unsigned char userProvided : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
