@interface KCellularLtePdcchStateStats : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _pccPdcchStates;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _scc0PdcchStates;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _scc1PdcchStates;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _scc2PdcchStates;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _scc3PdcchStates;
    struct { unsigned char timestamp : 1; unsigned char durationMs : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) unsigned long long pccPdcchStatesCount;
@property (readonly, nonatomic) unsigned int *pccPdcchStates;
@property (readonly, nonatomic) unsigned long long scc0PdcchStatesCount;
@property (readonly, nonatomic) unsigned int *scc0PdcchStates;
@property (readonly, nonatomic) unsigned long long scc1PdcchStatesCount;
@property (readonly, nonatomic) unsigned int *scc1PdcchStates;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (readonly, nonatomic) unsigned long long scc2PdcchStatesCount;
@property (readonly, nonatomic) unsigned int *scc2PdcchStates;
@property (readonly, nonatomic) unsigned long long scc3PdcchStatesCount;
@property (readonly, nonatomic) unsigned int *scc3PdcchStates;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

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
- (void)addPccPdcchState:(unsigned int)a0;
- (void)addScc0PdcchState:(unsigned int)a0;
- (void)addScc1PdcchState:(unsigned int)a0;
- (void)addScc2PdcchState:(unsigned int)a0;
- (void)addScc3PdcchState:(unsigned int)a0;
- (void)clearPccPdcchStates;
- (void)clearScc0PdcchStates;
- (void)clearScc1PdcchStates;
- (void)clearScc2PdcchStates;
- (void)clearScc3PdcchStates;
- (unsigned int)pccPdcchStateAtIndex:(unsigned long long)a0;
- (unsigned int)scc0PdcchStateAtIndex:(unsigned long long)a0;
- (unsigned int)scc1PdcchStateAtIndex:(unsigned long long)a0;
- (unsigned int)scc2PdcchStateAtIndex:(unsigned long long)a0;
- (unsigned int)scc3PdcchStateAtIndex:(unsigned long long)a0;
- (void)setPccPdcchStates:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setScc0PdcchStates:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setScc1PdcchStates:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setScc2PdcchStates:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setScc3PdcchStates:(unsigned int *)a0 count:(unsigned long long)a1;

@end
