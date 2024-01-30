@class _ICLLQueue, _ICLLPlaybackControlSettings, NSString;

@interface _ICLLQueueSyncAction : PBCodable <NSCopying> {
    _ICLLPlaybackControlSettings *_controlSettings;
    _ICLLQueue *_queue;
    NSString *_queueContext;
    int _revision;
    struct { unsigned char revision : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
