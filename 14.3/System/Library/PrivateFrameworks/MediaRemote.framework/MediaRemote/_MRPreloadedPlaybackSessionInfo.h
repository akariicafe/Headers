@class NSString;

@interface _MRPreloadedPlaybackSessionInfo : PBCodable <NSCopying> {
    NSString *_playbackSessionIdentifier;
    int _playbackSessionPriority;
    NSString *_playbackSessionRevision;
    struct { unsigned char playbackSessionPriority : 1; } _has;
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
