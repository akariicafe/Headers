@class NSMutableArray;

@interface NPKProtoSecureElementGetAppletsResponse : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _activationStates;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _lifecycleStates;
    struct { unsigned char pending : 1; } _has;
}

@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;
@property (retain, nonatomic) NSMutableArray *cardAIDs;
@property (readonly, nonatomic) unsigned long long lifecycleStatesCount;
@property (readonly, nonatomic) unsigned int *lifecycleStates;
@property (readonly, nonatomic) unsigned long long activationStatesCount;
@property (readonly, nonatomic) unsigned int *activationStates;
@property (retain, nonatomic) NSMutableArray *appletsBytes;

+ (Class)cardAIDsType;
+ (Class)appletsBytesType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addCardAIDs:(id)a0;
- (unsigned long long)cardAIDsCount;
- (void)clearCardAIDs;
- (id)cardAIDsAtIndex:(unsigned long long)a0;
- (void)addAppletsBytes:(id)a0;
- (void)clearLifecycleStates;
- (unsigned int)lifecycleStatesAtIndex:(unsigned long long)a0;
- (void)addLifecycleStates:(unsigned int)a0;
- (void)clearActivationStates;
- (unsigned int)activationStatesAtIndex:(unsigned long long)a0;
- (void)addActivationStates:(unsigned int)a0;
- (unsigned long long)appletsBytesCount;
- (void)clearAppletsBytes;
- (id)appletsBytesAtIndex:(unsigned long long)a0;
- (void)setLifecycleStates:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setActivationStates:(unsigned int *)a0 count:(unsigned long long)a1;

@end
