@class SUGSchemaSUGAggregateCounts, NSData;

@interface SUGSchemaSUGUserStatistics : SISchemaInstrumentationMessage {
    struct { unsigned char isTwoByThreeUser : 1; } _has;
}

@property (retain, nonatomic) SUGSchemaSUGAggregateCounts *totalSiriRequests;
@property (nonatomic) BOOL hasTotalSiriRequests;
@property (retain, nonatomic) SUGSchemaSUGAggregateCounts *totalPreviousSuggestionsShown;
@property (nonatomic) BOOL hasTotalPreviousSuggestionsShown;
@property (retain, nonatomic) SUGSchemaSUGAggregateCounts *totalSiriHelpRequests;
@property (nonatomic) BOOL hasTotalSiriHelpRequests;
@property (retain, nonatomic) SUGSchemaSUGAggregateCounts *totalUniqueSiriEventTypes;
@property (nonatomic) BOOL hasTotalUniqueSiriEventTypes;
@property (nonatomic) BOOL isTwoByThreeUser;
@property (nonatomic) BOOL hasIsTwoByThreeUser;
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
- (void)deleteTotalUniqueSiriEventTypes;
- (void)deleteIsTwoByThreeUser;
- (void)deleteTotalPreviousSuggestionsShown;
- (void)deleteTotalSiriHelpRequests;
- (void)deleteTotalSiriRequests;

@end
