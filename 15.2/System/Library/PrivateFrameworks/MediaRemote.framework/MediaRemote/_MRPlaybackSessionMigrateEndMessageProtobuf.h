@class NSString, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionRequestProtobuf;

@interface _MRPlaybackSessionMigrateEndMessageProtobuf : PBCodable <NSCopying> {
    long long _errorCode;
    NSString *_errorDescription;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    _MRPlaybackSessionRequestProtobuf *_request;
    struct { unsigned char errorCode : 1; } _has;
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
