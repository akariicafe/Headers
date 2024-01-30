@class NSData;

@interface SUGSchemaSUGAggregateCounts : SISchemaInstrumentationMessage {
    struct { unsigned char lastDayCount : 1; unsigned char lastWeekBucket : 1; unsigned char last28DaysBucket : 1; } _has;
}

@property (nonatomic) unsigned int lastDayCount;
@property (nonatomic) BOOL hasLastDayCount;
@property (nonatomic) unsigned int lastWeekBucket;
@property (nonatomic) BOOL hasLastWeekBucket;
@property (nonatomic) unsigned int last28DaysBucket;
@property (nonatomic) BOOL hasLast28DaysBucket;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteLast28DaysBucket;
- (void)deleteLastDayCount;
- (void)deleteLastWeekBucket;

@end
