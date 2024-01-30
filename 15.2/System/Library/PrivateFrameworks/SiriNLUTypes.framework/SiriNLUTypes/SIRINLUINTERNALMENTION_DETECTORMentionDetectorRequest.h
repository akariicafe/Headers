@class NSString, SIRINLUINTERNALTokenChain, SIRINLUEXTERNALUUID, SIRINLUINTERNALNLv4EmbeddingTensor;

@interface SIRINLUINTERNALMENTION_DETECTORMentionDetectorRequest : PBRequest <NSCopying> {
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
@property (nonatomic) BOOL hasMaxCandidates;
@property (nonatomic) unsigned long long maxCandidates;

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

@end
