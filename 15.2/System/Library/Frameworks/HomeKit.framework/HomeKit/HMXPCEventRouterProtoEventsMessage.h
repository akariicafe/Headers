@class NSMutableArray;

@interface HMXPCEventRouterProtoEventsMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) NSMutableArray *cachedEvents;

+ (Class)eventsType;
+ (Class)cachedEventsType;

- (unsigned long long)eventsCount;
- (void)addEvents:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)clearEvents;
- (id)dictionaryRepresentation;
- (void)clearCachedEvents;
- (void)addCachedEvents:(id)a0;
- (unsigned long long)cachedEventsCount;
- (id)cachedEventsAtIndex:(unsigned long long)a0;

@end
