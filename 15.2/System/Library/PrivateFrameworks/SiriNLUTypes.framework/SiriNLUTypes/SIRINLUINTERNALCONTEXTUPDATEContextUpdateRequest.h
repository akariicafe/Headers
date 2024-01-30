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

+ (Class)qrHypothesesType;
+ (Class)previousTurnsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addQrHypotheses:(id)a0;
- (unsigned long long)qrHypothesesCount;
- (void)clearQrHypotheses;
- (id)qrHypothesesAtIndex:(unsigned long long)a0;
- (void)addPreviousTurns:(id)a0;
- (unsigned long long)previousTurnsCount;
- (void)clearPreviousTurns;
- (id)previousTurnsAtIndex:(unsigned long long)a0;

@end
