@class NSArray, NSData;

@interface FLOWSchemaFLOWSportsExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *sportNames;
@property (copy, nonatomic) NSArray *leagues;
@property (copy, nonatomic) NSArray *athleteEntities;
@property (copy, nonatomic) NSArray *teamEntities;
@property (copy, nonatomic) NSArray *eventEntities;
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
- (void)deleteSportName;
- (void)addAthleteEntities:(id)a0;
- (void)addEventEntities:(id)a0;
- (void)addLeague:(id)a0;
- (void)addSportName:(int)a0;
- (void)addTeamEntities:(id)a0;
- (id)athleteEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)athleteEntitiesCount;
- (void)clearAthleteEntities;
- (void)clearEventEntities;
- (void)clearLeague;
- (void)clearSportName;
- (void)clearTeamEntities;
- (void)deleteAthleteEntities;
- (void)deleteEventEntities;
- (void)deleteLeague;
- (void)deleteTeamEntities;
- (id)eventEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)eventEntitiesCount;
- (id)leagueAtIndex:(unsigned long long)a0;
- (unsigned long long)leagueCount;
- (int)sportNameAtIndex:(unsigned long long)a0;
- (unsigned long long)sportNameCount;
- (id)teamEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)teamEntitiesCount;

@end
