@class NSString, SIRINLUINTERNALTokenChain, SIRINLUEXTERNALUUID, SIRINLUINTERNALNLv4EmbeddingTensor, NSMutableArray;

@interface SIRINLUINTERNALMENTION_RESOLVERMentionResolverRequest : PBRequest <NSCopying> {
    struct { unsigned char maxCandidates : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (readonly, nonatomic) BOOL hasNluRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId;
@property (readonly, nonatomic) BOOL hasResultCandidateId;
@property (retain, nonatomic) NSString *resultCandidateId;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (readonly, nonatomic) BOOL hasTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;
@property (readonly, nonatomic) BOOL hasEmbeddingTensor;
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddingTensor;
@property (retain, nonatomic) NSMutableArray *entityCandidates;
@property (retain, nonatomic) NSMutableArray *detectedMentions;
@property (nonatomic) BOOL hasMaxCandidates;
@property (nonatomic) unsigned long long maxCandidates;

+ (Class)entityCandidatesType;
+ (Class)detectedMentionsType;

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
- (void)addEntityCandidates:(id)a0;
- (void)addDetectedMentions:(id)a0;
- (unsigned long long)entityCandidatesCount;
- (void)clearEntityCandidates;
- (id)entityCandidatesAtIndex:(unsigned long long)a0;
- (unsigned long long)detectedMentionsCount;
- (void)clearDetectedMentions;
- (id)detectedMentionsAtIndex:(unsigned long long)a0;

@end
