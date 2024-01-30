@class NSString;

@interface GEODailyUseSummaryUseEvent : PBCodable <NSCopying> {
    NSString *_usageString;
    int _appType;
    unsigned int _count;
    int _eventType;
    BOOL _usageBool;
    struct { unsigned char has_appType : 1; unsigned char has_count : 1; unsigned char has_eventType : 1; unsigned char has_usageBool : 1; } _flags;
}

@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasAppType;
@property (nonatomic) int appType;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasUsageBool;
@property (nonatomic) BOOL usageBool;
@property (readonly, nonatomic) BOOL hasUsageString;
@property (retain, nonatomic) NSString *usageString;

+ (BOOL)isValid:(id)a0;

- (id)appTypeAsString:(int)a0;
- (id)eventTypeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsEventType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)StringAsAppType:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
