@class _MRNowPlayingPlayerPathProtobuf, NSString, NSMutableArray, _MRPlaybackQueueContextProtobuf;

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying> {
    NSMutableArray *_contentItems;
    _MRPlaybackQueueContextProtobuf *_context;
    int _location;
    NSString *_queueIdentifier;
    NSString *_requestID;
    _MRNowPlayingPlayerPathProtobuf *_resolvedPlayerPath;
    BOOL _sendingPlaybackQueueTransaction;
    struct { unsigned char location : 1; unsigned char sendingPlaybackQueueTransaction : 1; } _has;
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
