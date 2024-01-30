@class NSMutableArray;

@interface GEOLogMsgEventDailyUseSummary : PBCodable <NSCopying> {
    NSMutableArray *_useEvents;
}

@property (retain, nonatomic) NSMutableArray *useEvents;

+ (Class)useEventsType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addUseEvents:(id)a0;
- (unsigned long long)useEventsCount;
- (void)clearUseEvents;
- (id)useEventsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
