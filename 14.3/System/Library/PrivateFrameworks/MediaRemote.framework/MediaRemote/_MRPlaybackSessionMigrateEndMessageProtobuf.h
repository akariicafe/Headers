@class NSString, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionRequestProtobuf;

@interface _MRPlaybackSessionMigrateEndMessageProtobuf : PBCodable <NSCopying> {
    long long _errorCode;
    NSString *_errorDescription;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    _MRPlaybackSessionRequestProtobuf *_request;
    struct { unsigned char errorCode : 1; } _has;
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
