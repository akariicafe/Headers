@class NSMutableArray;

@interface ATXPBBlendingSessionLog : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *ermEvents;
@property (retain, nonatomic) NSMutableArray *blendingUpdates;

+ (Class)ermEventType;
+ (Class)blendingUpdateType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addErmEvent:(id)a0;
- (void)addBlendingUpdate:(id)a0;
- (unsigned long long)ermEventsCount;
- (void)clearErmEvents;
- (id)ermEventAtIndex:(unsigned long long)a0;
- (unsigned long long)blendingUpdatesCount;
- (void)clearBlendingUpdates;
- (id)blendingUpdateAtIndex:(unsigned long long)a0;

@end
