@class NSString, SIRINLUEXTERNALUUID, SIRINLUEXTERNALTurnInput, NSMutableArray;

@interface SIRINLUINTERNALCONTEXTUPDATEContextUpdateRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasCurrentTurn;
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *currentTurn;
@property (retain, nonatomic) NSMutableArray *previousTurns;
@property (retain, nonatomic) NSMutableArray *qrHypotheses;
@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (readonly, nonatomic) BOOL hasResultCandidateId;
@property (retain, nonatomic) NSString *resultCandidateId;
@property (readonly, nonatomic) BOOL hasNluRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId;

+ (Class)previousTurnsType;
+ (Class)qrHypothesesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addPreviousTurns:(id)a0;
- (void)addQrHypotheses:(id)a0;
- (void)clearPreviousTurns;
- (void)clearQrHypotheses;
- (id)previousTurnsAtIndex:(unsigned long long)a0;
- (unsigned long long)previousTurnsCount;
- (id)qrHypothesesAtIndex:(unsigned long long)a0;
- (unsigned long long)qrHypothesesCount;

@end
