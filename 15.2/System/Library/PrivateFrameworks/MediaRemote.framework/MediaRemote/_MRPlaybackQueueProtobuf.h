@class _MRNowPlayingPlayerPathProtobuf, NSString, NSMutableArray, _MRPlaybackQueueContextProtobuf;

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying> {
    NSMutableArray *_contentItems;
    _MRPlaybackQueueContextProtobuf *_context;
    int _location;
    NSMutableArray *_participants;
    NSString *_queueIdentifier;
    NSString *_requestID;
    _MRNowPlayingPlayerPathProtobuf *_resolvedPlayerPath;
    BOOL _sendingPlaybackQueueTransaction;
    struct { unsigned char location : 1; unsigned char sendingPlaybackQueueTransaction : 1; } _has;
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
