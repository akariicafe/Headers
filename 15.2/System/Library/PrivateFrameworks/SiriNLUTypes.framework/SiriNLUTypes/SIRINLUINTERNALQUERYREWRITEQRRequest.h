@class NSString, SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUINTERNALQUERYREWRITEQRRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (retain, nonatomic) NSMutableArray *interactions;
@property (retain, nonatomic) NSMutableArray *originalInteractions;
@property (readonly, nonatomic) BOOL hasResultCandidateId;
@property (retain, nonatomic) NSString *resultCandidateId;
@property (readonly, nonatomic) BOOL hasNluRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId;

+ (Class)interactionsType;
+ (Class)originalInteractionsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)addInteractions:(id)a0;
- (unsigned long long)interactionsCount;
- (void)clearInteractions;
- (id)interactionsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addOriginalInteractions:(id)a0;
- (unsigned long long)originalInteractionsCount;
- (void)clearOriginalInteractions;
- (id)originalInteractionsAtIndex:(unsigned long long)a0;

@end
