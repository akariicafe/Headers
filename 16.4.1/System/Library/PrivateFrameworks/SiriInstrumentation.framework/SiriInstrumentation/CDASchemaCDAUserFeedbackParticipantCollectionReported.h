@class NSString, NSArray, NSData;

@interface CDASchemaCDAUserFeedbackParticipantCollectionReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *surveyId;
@property (nonatomic) BOOL hasSurveyId;
@property (copy, nonatomic) NSArray *userFeedbackParticipants;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (id)userFeedbackParticipantAtIndex:(unsigned long long)a0;
- (void)addUserFeedbackParticipant:(id)a0;
- (void)clearUserFeedbackParticipant;
- (void)deleteSurveyId;
- (void)deleteUserFeedbackParticipant;
- (unsigned long long)userFeedbackParticipantCount;

@end
