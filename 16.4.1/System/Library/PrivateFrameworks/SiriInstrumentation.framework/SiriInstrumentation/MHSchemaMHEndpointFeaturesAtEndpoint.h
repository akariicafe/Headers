@class NSData;

@interface MHSchemaMHEndpointFeaturesAtEndpoint : SISchemaInstrumentationMessage {
    struct { unsigned char trailingSilenceDurationInNs : 1; unsigned char clientSilenceFramesCountInNs : 1; unsigned char endOfSentenceLikelihood : 1; unsigned char wordCount : 1; unsigned char serverFeaturesLatencyInNs : 1; unsigned char clientSilenceProbability : 1; } _has;
}

@property (nonatomic) unsigned long long trailingSilenceDurationInNs;
@property (nonatomic) BOOL hasTrailingSilenceDurationInNs;
@property (nonatomic) unsigned long long clientSilenceFramesCountInNs;
@property (nonatomic) BOOL hasClientSilenceFramesCountInNs;
@property (nonatomic) float endOfSentenceLikelihood;
@property (nonatomic) BOOL hasEndOfSentenceLikelihood;
@property (nonatomic) unsigned int wordCount;
@property (nonatomic) BOOL hasWordCount;
@property (nonatomic) unsigned long long serverFeaturesLatencyInNs;
@property (nonatomic) BOOL hasServerFeaturesLatencyInNs;
@property (nonatomic) float clientSilenceProbability;
@property (nonatomic) BOOL hasClientSilenceProbability;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteServerFeaturesLatencyInNs;
- (void)deleteWordCount;
- (void)deleteClientSilenceFramesCountInNs;
- (void)deleteClientSilenceProbability;
- (void)deleteEndOfSentenceLikelihood;
- (void)deleteTrailingSilenceDurationInNs;

@end
