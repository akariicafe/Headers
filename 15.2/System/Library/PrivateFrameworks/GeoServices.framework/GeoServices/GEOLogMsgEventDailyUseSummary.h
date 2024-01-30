@class NSMutableArray;

@interface GEOLogMsgEventDailyUseSummary : PBCodable <NSCopying> {
    double _firstEventDate;
    NSMutableArray *_useEvents;
    struct { unsigned char has_firstEventDate : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *useEvents;
@property (nonatomic) BOOL hasFirstEventDate;
@property (nonatomic) double firstEventDate;

+ (BOOL)isValid:(id)a0;
+ (Class)useEventsType;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)addUseEvents:(id)a0;
- (unsigned long long)useEventsCount;
- (void)clearUseEvents;
- (id)useEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
