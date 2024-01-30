@class NSData;

@interface CAARSchemaCAARAppLevelDisambiguationHistory : SISchemaInstrumentationMessage {
    struct { unsigned char numAppDisambiguationsLastTwoMinutes : 1; unsigned char numAppDisambiguationsLastTenMinutes : 1; unsigned char numAppDisambiguationsLastOneHour : 1; unsigned char numAppDisambiguationsLastSixHours : 1; unsigned char numAppDisambiguationsLastOneDay : 1; unsigned char numAppDisambiguationsLastSevenDays : 1; unsigned char numAppDisambiguationsLastTwentyEightDays : 1; unsigned char numAppDisambiguationsLastInfinity : 1; unsigned char numSelectedAppDisambiguationsTwoMinutes : 1; unsigned char numSelectedAppDisambiguationsLastTenMinutes : 1; unsigned char numSelectedAppDisambiguationsLastOneHour : 1; unsigned char numSelectedAppDisambiguationsLastSixHours : 1; unsigned char numSelectedAppDisambiguationsLastOneDay : 1; unsigned char numSelectedAppDisambiguationsLastSevenDays : 1; unsigned char numSelectedAppDisambiguationsLastTwentyEightDays : 1; unsigned char numSelectedAppDisambiguationsLastInfinity : 1; unsigned char wasAppSelectedInLastDisambiguation : 1; unsigned char minutesSinceLastDisambiguationSameApps : 1; } _has;
}

@property (nonatomic) unsigned int numAppDisambiguationsLastTwoMinutes;
@property (nonatomic) BOOL hasNumAppDisambiguationsLastTwoMinutes;
@property (nonatomic) unsigned int numAppDisambiguationsLastTenMinutes;
@property (nonatomic) BOOL hasNumAppDisambiguationsLastTenMinutes;
@property (nonatomic) unsigned int numAppDisambiguationsLastOneHour;
@property (nonatomic) BOOL hasNumAppDisambiguationsLastOneHour;
@property (nonatomic) unsigned int numAppDisambiguationsLastSixHours;
@property (nonatomic) BOOL hasNumAppDisambiguationsLastSixHours;
@property (nonatomic) unsigned int numAppDisambiguationsLastOneDay;
@property (nonatomic) BOOL hasNumAppDisambiguationsLastOneDay;
@property (nonatomic) unsigned int numAppDisambiguationsLastSevenDays;
@property (nonatomic) BOOL hasNumAppDisambiguationsLastSevenDays;
@property (nonatomic) unsigned int numAppDisambiguationsLastTwentyEightDays;
@property (nonatomic) BOOL hasNumAppDisambiguationsLastTwentyEightDays;
@property (nonatomic) unsigned int numAppDisambiguationsLastInfinity;
@property (nonatomic) BOOL hasNumAppDisambiguationsLastInfinity;
@property (nonatomic) unsigned int numSelectedAppDisambiguationsTwoMinutes;
@property (nonatomic) BOOL hasNumSelectedAppDisambiguationsTwoMinutes;
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastTenMinutes;
@property (nonatomic) BOOL hasNumSelectedAppDisambiguationsLastTenMinutes;
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastOneHour;
@property (nonatomic) BOOL hasNumSelectedAppDisambiguationsLastOneHour;
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastSixHours;
@property (nonatomic) BOOL hasNumSelectedAppDisambiguationsLastSixHours;
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastOneDay;
@property (nonatomic) BOOL hasNumSelectedAppDisambiguationsLastOneDay;
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastSevenDays;
@property (nonatomic) BOOL hasNumSelectedAppDisambiguationsLastSevenDays;
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastTwentyEightDays;
@property (nonatomic) BOOL hasNumSelectedAppDisambiguationsLastTwentyEightDays;
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastInfinity;
@property (nonatomic) BOOL hasNumSelectedAppDisambiguationsLastInfinity;
@property (nonatomic) BOOL wasAppSelectedInLastDisambiguation;
@property (nonatomic) BOOL hasWasAppSelectedInLastDisambiguation;
@property (nonatomic) unsigned int minutesSinceLastDisambiguationSameApps;
@property (nonatomic) BOOL hasMinutesSinceLastDisambiguationSameApps;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteMinutesSinceLastDisambiguationSameApps;
- (void)deleteNumAppDisambiguationsLastInfinity;
- (void)deleteNumAppDisambiguationsLastOneDay;
- (void)deleteNumAppDisambiguationsLastOneHour;
- (void)deleteNumAppDisambiguationsLastSevenDays;
- (void)deleteNumAppDisambiguationsLastSixHours;
- (void)deleteNumAppDisambiguationsLastTenMinutes;
- (void)deleteNumAppDisambiguationsLastTwentyEightDays;
- (void)deleteNumAppDisambiguationsLastTwoMinutes;
- (void)deleteNumSelectedAppDisambiguationsLastInfinity;
- (void)deleteNumSelectedAppDisambiguationsLastOneDay;
- (void)deleteNumSelectedAppDisambiguationsLastOneHour;
- (void)deleteNumSelectedAppDisambiguationsLastSevenDays;
- (void)deleteNumSelectedAppDisambiguationsLastSixHours;
- (void)deleteNumSelectedAppDisambiguationsLastTenMinutes;
- (void)deleteNumSelectedAppDisambiguationsLastTwentyEightDays;
- (void)deleteNumSelectedAppDisambiguationsTwoMinutes;
- (void)deleteWasAppSelectedInLastDisambiguation;

@end
