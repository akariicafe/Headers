@class NSData;

@interface DODMLASRSchemaDODMLASRTranscriptMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char numDocumentsRejected : 1; unsigned char numSentencesRejected : 1; unsigned char numDocumentsAccepted : 1; unsigned char numSentencesAccepted : 1; unsigned char numTokensAccepted : 1; unsigned char numTokensOutOfVocabularyAccepted : 1; unsigned char numDocumentsDictated : 1; unsigned char numDocumentsTyped : 1; unsigned char numTokensDictated : 1; unsigned char numTokensTyped : 1; unsigned char numSentencesMungeRejected : 1; unsigned char numSentencesMungeChanged : 1; unsigned char numTokensEstimatedRejected : 1; unsigned char numTokensEstimatedExamined : 1; } _has;
}

@property (nonatomic) unsigned int numDocumentsRejected;
@property (nonatomic) BOOL hasNumDocumentsRejected;
@property (nonatomic) unsigned int numSentencesRejected;
@property (nonatomic) BOOL hasNumSentencesRejected;
@property (nonatomic) unsigned int numDocumentsAccepted;
@property (nonatomic) BOOL hasNumDocumentsAccepted;
@property (nonatomic) unsigned int numSentencesAccepted;
@property (nonatomic) BOOL hasNumSentencesAccepted;
@property (nonatomic) unsigned int numTokensAccepted;
@property (nonatomic) BOOL hasNumTokensAccepted;
@property (nonatomic) unsigned int numTokensOutOfVocabularyAccepted;
@property (nonatomic) BOOL hasNumTokensOutOfVocabularyAccepted;
@property (nonatomic) unsigned int numDocumentsDictated;
@property (nonatomic) BOOL hasNumDocumentsDictated;
@property (nonatomic) unsigned int numDocumentsTyped;
@property (nonatomic) BOOL hasNumDocumentsTyped;
@property (nonatomic) unsigned int numTokensDictated;
@property (nonatomic) BOOL hasNumTokensDictated;
@property (nonatomic) unsigned int numTokensTyped;
@property (nonatomic) BOOL hasNumTokensTyped;
@property (nonatomic) unsigned int numSentencesMungeRejected;
@property (nonatomic) BOOL hasNumSentencesMungeRejected;
@property (nonatomic) unsigned int numSentencesMungeChanged;
@property (nonatomic) BOOL hasNumSentencesMungeChanged;
@property (nonatomic) unsigned int numTokensEstimatedRejected;
@property (nonatomic) BOOL hasNumTokensEstimatedRejected;
@property (nonatomic) unsigned int numTokensEstimatedExamined;
@property (nonatomic) BOOL hasNumTokensEstimatedExamined;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteNumSentencesMungeRejected;
- (void)deleteNumDocumentsAccepted;
- (void)deleteNumDocumentsDictated;
- (void)deleteNumDocumentsRejected;
- (void)deleteNumDocumentsTyped;
- (void)deleteNumSentencesAccepted;
- (void)deleteNumSentencesMungeChanged;
- (void)deleteNumSentencesRejected;
- (void)deleteNumTokensAccepted;
- (void)deleteNumTokensDictated;
- (void)deleteNumTokensEstimatedExamined;
- (void)deleteNumTokensEstimatedRejected;
- (void)deleteNumTokensOutOfVocabularyAccepted;
- (void)deleteNumTokensTyped;

@end
