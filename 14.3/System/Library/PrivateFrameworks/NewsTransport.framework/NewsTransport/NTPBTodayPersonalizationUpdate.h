@class NSMutableArray;

@interface NTPBTodayPersonalizationUpdate : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *events;

+ (Class)eventsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)clearEvents;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)eventsCount;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addEvents:(id)a0;
- (id)eventsAtIndex:(unsigned long long)a0;

@end
