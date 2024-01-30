@class NSString, SIRINLUINTERNALTokenChain, SIRINLUEXTERNALUUID, SIRINLUINTERNALNLv4EmbeddingTensor, NSMutableArray, SIRINLUEXTERNALRequestID;

@interface SIRINLUINTERNALMENTION_RESOLVERMentionResolverRequest : PBRequest <NSCopying> {
    struct { unsigned char maxCandidates : 1; unsigned char turnIndex : 1; } _has;
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
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (nonatomic) BOOL hasTurnIndex;
@property (nonatomic) unsigned long long turnIndex;
@property (readonly, nonatomic) BOOL hasCdmRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *cdmRequestId;
@property (retain, nonatomic) NSMutableArray *contextualSpans;

+ (Class)contextualSpansType;
+ (Class)detectedMentionsType;
+ (Class)entityCandidatesType;
+ (Class)matchingSpansType;

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
- (void)addContextualSpans:(id)a0;
- (void)addMatchingSpans:(id)a0;
- (void)clearContextualSpans;
- (void)clearMatchingSpans;
- (id)contextualSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)contextualSpansCount;
- (id)matchingSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)matchingSpansCount;
- (void)addDetectedMentions:(id)a0;
- (void)addEntityCandidates:(id)a0;
- (void)clearDetectedMentions;
- (void)clearEntityCandidates;
- (id)detectedMentionsAtIndex:(unsigned long long)a0;
- (unsigned long long)detectedMentionsCount;
- (id)entityCandidatesAtIndex:(unsigned long long)a0;
- (unsigned long long)entityCandidatesCount;

@end
