@class NSMutableArray;

@interface NTPBNetworkSessionList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *networkSessions;
@property (retain, nonatomic) NSMutableArray *networkEvents;

+ (Class)networkSessionsType;
+ (Class)networkEventsType;

- (void)addNetworkEvents:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (id)networkEventsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)networkEventsCount;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addNetworkSessions:(id)a0;
- (void)clearNetworkSessions;
- (unsigned long long)networkSessionsCount;
- (id)networkSessionsAtIndex:(unsigned long long)a0;
- (void)clearNetworkEvents;

@end
