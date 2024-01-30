@class NSString, _MRNowPlayingPlayerPathProtobuf, NSMutableArray;

@interface _MRSendCommandResultProtobuf : PBCodable <NSCopying> {
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    int _sendError;
    NSString *_sendErrorDescription;
    NSMutableArray *_statuses;
    struct { unsigned char sendError : 1; } _has;
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
