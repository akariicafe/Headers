@class NSData;

@interface FLOWSchemaFLOWWebAnswerExecution : SISchemaInstrumentationMessage {
    struct { unsigned char answerType : 1; unsigned char allowListType : 1; unsigned char fuzzyMatchType : 1; unsigned char subDomain : 1; unsigned char quality : 1; unsigned char answerClass : 1; } _has;
}

@property (nonatomic) unsigned int answerType;
@property (nonatomic) BOOL hasAnswerType;
@property (nonatomic) unsigned int allowListType;
@property (nonatomic) BOOL hasAllowListType;
@property (nonatomic) unsigned int fuzzyMatchType;
@property (nonatomic) BOOL hasFuzzyMatchType;
@property (nonatomic) unsigned int subDomain;
@property (nonatomic) BOOL hasSubDomain;
@property (nonatomic) unsigned int quality;
@property (nonatomic) BOOL hasQuality;
@property (nonatomic) unsigned int answerClass;
@property (nonatomic) BOOL hasAnswerClass;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteSubDomain;
- (void)deleteAllowListType;
- (void)deleteAnswerClass;
- (void)deleteAnswerType;
- (void)deleteFuzzyMatchType;
- (void)deleteQuality;

@end
