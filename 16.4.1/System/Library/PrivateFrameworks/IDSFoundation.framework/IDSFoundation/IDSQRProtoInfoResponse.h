@class NSString;

@interface IDSQRProtoInfoResponse : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _activeLightweightParticipants;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _activeParticipants;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _activeVirtualParticipants;
}

@property (readonly, nonatomic) BOOL hasClientAddress;
@property (retain, nonatomic) NSString *clientAddress;
@property (readonly, nonatomic) unsigned long long activeParticipantsCount;
@property (readonly, nonatomic) unsigned long long *activeParticipants;
@property (readonly, nonatomic) unsigned long long activeLightweightParticipantsCount;
@property (readonly, nonatomic) unsigned long long *activeLightweightParticipants;
@property (readonly, nonatomic) unsigned long long activeVirtualParticipantsCount;
@property (readonly, nonatomic) unsigned long long *activeVirtualParticipants;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)activeLightweightParticipantsAtIndex:(unsigned long long)a0;
- (unsigned long long)activeParticipantsAtIndex:(unsigned long long)a0;
- (unsigned long long)activeVirtualParticipantsAtIndex:(unsigned long long)a0;
- (void)addActiveLightweightParticipants:(unsigned long long)a0;
- (void)addActiveParticipants:(unsigned long long)a0;
- (void)addActiveVirtualParticipants:(unsigned long long)a0;
- (void)clearActiveLightweightParticipants;
- (void)clearActiveParticipants;
- (void)clearActiveVirtualParticipants;
- (void)setActiveLightweightParticipants:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setActiveParticipants:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setActiveVirtualParticipants:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
