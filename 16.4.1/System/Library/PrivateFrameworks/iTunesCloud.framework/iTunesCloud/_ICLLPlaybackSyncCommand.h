@class NSString;

@interface _ICLLPlaybackSyncCommand : PBCodable <NSCopying> {
    NSString *_participantState;
    int _payload;
    NSString *_transportControlState;
    struct { unsigned char payload : 1; } _has;
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
