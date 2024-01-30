@class _MRLyricsTokenProtobuf;

@interface _MRLyricsEventProtobuf : PBCodable <NSCopying> {
    double _endTime;
    double _startTime;
    _MRLyricsTokenProtobuf *_token;
    struct { unsigned char endTime : 1; unsigned char startTime : 1; } _has;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
