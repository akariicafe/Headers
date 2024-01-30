@class NSString;

@interface _ICLLParticipant : PBCodable <NSCopying> {
    long long _participantId;
    NSString *_externalId;
    NSString *_participantUUID;
    int _storefront;
    int _unreliablePlaybackSyncStatus;
    struct { unsigned char participantId : 1; unsigned char storefront : 1; unsigned char unreliablePlaybackSyncStatus : 1; } _has;
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
