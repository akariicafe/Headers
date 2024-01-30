@class NSString, BMPBHomeKitClientBase, NSMutableArray;

@interface BMPBHomeKitClientMediaAccessoryControlEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) BMPBHomeKitClientBase *base;
@property (readonly, nonatomic) BOOL hasAccessoryUniqueIdentifier;
@property (retain, nonatomic) NSString *accessoryUniqueIdentifier;
@property (retain, nonatomic) NSMutableArray *accessoryStates;
@property (readonly, nonatomic) BOOL hasAccessoryMediaRouteIdentifier;
@property (retain, nonatomic) NSString *accessoryMediaRouteIdentifier;
@property (retain, nonatomic) NSMutableArray *zoneUniqueIdentifiers;
@property (readonly, nonatomic) BOOL hasRoomUniqueIdentifier;
@property (retain, nonatomic) NSString *roomUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasAccessoryName;
@property (retain, nonatomic) NSString *accessoryName;
@property (readonly, nonatomic) BOOL hasRoomName;
@property (retain, nonatomic) NSString *roomName;
@property (retain, nonatomic) NSMutableArray *zoneNames;
@property (readonly, nonatomic) BOOL hasHomeName;
@property (retain, nonatomic) NSString *homeName;

+ (Class)zoneNamesType;
+ (Class)zoneUniqueIdentifiersType;
+ (Class)accessoryStateType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)zoneNamesCount;
- (void)clearZoneNames;
- (void)addZoneNames:(id)a0;
- (id)zoneNamesAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addZoneUniqueIdentifiers:(id)a0;
- (unsigned long long)zoneUniqueIdentifiersCount;
- (void)clearZoneUniqueIdentifiers;
- (id)zoneUniqueIdentifiersAtIndex:(unsigned long long)a0;
- (void)addAccessoryState:(id)a0;
- (unsigned long long)accessoryStatesCount;
- (void)clearAccessoryStates;
- (id)accessoryStateAtIndex:(unsigned long long)a0;

@end
