@class SUGSchemaSUGUserStatistics, SUGSchemaSUGInteraction, NSData;

@interface SUGSchemaSUGEngagementReported : SISchemaInstrumentationMessage {
    struct { unsigned char performedTimeSince1970InMs : 1; } _has;
}

@property (nonatomic) unsigned long long performedTimeSince1970InMs;
@property (nonatomic) BOOL hasPerformedTimeSince1970InMs;
@property (retain, nonatomic) SUGSchemaSUGUserStatistics *userStatistics;
@property (nonatomic) BOOL hasUserStatistics;
@property (retain, nonatomic) SUGSchemaSUGInteraction *interaction;
@property (nonatomic) BOOL hasInteraction;
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
- (void)deleteInteraction;
- (void)deletePerformedTimeSince1970InMs;
- (void)deleteUserStatistics;

@end
