@interface AWDWiFiMetricJoinTimeout : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _associationStates;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _channels;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _joinClassificationInfos;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _joinTargetClassificationInfos;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _totalNumberOfJoinAttempts;
    struct { unsigned char sequence : 1; } _has;
}

@property (nonatomic) BOOL hasSequence;
@property (nonatomic) unsigned int sequence;
@property (readonly, nonatomic) unsigned long long joinClassificationInfosCount;
@property (readonly, nonatomic) unsigned int *joinClassificationInfos;
@property (readonly, nonatomic) unsigned long long joinTargetClassificationInfosCount;
@property (readonly, nonatomic) unsigned int *joinTargetClassificationInfos;
@property (readonly, nonatomic) unsigned long long associationStatesCount;
@property (readonly, nonatomic) unsigned int *associationStates;
@property (readonly, nonatomic) unsigned long long channelsCount;
@property (readonly, nonatomic) unsigned int *channels;
@property (readonly, nonatomic) unsigned long long totalNumberOfJoinAttemptsCount;
@property (readonly, nonatomic) unsigned int *totalNumberOfJoinAttempts;

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
- (void)addChannel:(unsigned int)a0;
- (unsigned int)channelAtIndex:(unsigned long long)a0;
- (void)addAssociationState:(unsigned int)a0;
- (void)addJoinClassificationInfo:(unsigned int)a0;
- (void)addJoinTargetClassificationInfo:(unsigned int)a0;
- (void)addTotalNumberOfJoinAttempts:(unsigned int)a0;
- (unsigned int)associationStateAtIndex:(unsigned long long)a0;
- (void)clearAssociationStates;
- (void)clearChannels;
- (void)clearJoinClassificationInfos;
- (void)clearJoinTargetClassificationInfos;
- (void)clearTotalNumberOfJoinAttempts;
- (unsigned int)joinClassificationInfoAtIndex:(unsigned long long)a0;
- (unsigned int)joinTargetClassificationInfoAtIndex:(unsigned long long)a0;
- (void)setAssociationStates:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setChannels:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setJoinClassificationInfos:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setJoinTargetClassificationInfos:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setTotalNumberOfJoinAttempts:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned int)totalNumberOfJoinAttemptsAtIndex:(unsigned long long)a0;

@end
