@class NSString;

@interface _MRNowPlayingPlayerProtobuf : PBCodable <NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _mxSessionIDs;
    int _audioSessionType;
    NSString *_displayName;
    NSString *_identifier;
    struct { unsigned char audioSessionType : 1; } _has;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
