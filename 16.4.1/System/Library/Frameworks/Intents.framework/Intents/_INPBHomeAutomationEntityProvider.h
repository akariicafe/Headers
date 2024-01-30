@class NSArray, NSString, _INPBString;

@interface _INPBHomeAutomationEntityProvider : PBCodable <_INPBHomeAutomationEntityProvider, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *accessoryNames;
@property (readonly, nonatomic) unsigned long long accessoryNamesCount;
@property (retain, nonatomic) _INPBString *destinationDeviceId;
@property (readonly, nonatomic) BOOL hasDestinationDeviceId;
@property (retain, nonatomic) _INPBString *homeName;
@property (readonly, nonatomic) BOOL hasHomeName;
@property (retain, nonatomic) _INPBString *intentDeviceQuantifier;
@property (readonly, nonatomic) BOOL hasIntentDeviceQuantifier;
@property (retain, nonatomic) _INPBString *intentDeviceType;
@property (readonly, nonatomic) BOOL hasIntentDeviceType;
@property (copy, nonatomic) NSArray *intentFromEntities;
@property (readonly, nonatomic) unsigned long long intentFromEntitiesCount;
@property (retain, nonatomic) _INPBString *intentPlaceHint;
@property (readonly, nonatomic) BOOL hasIntentPlaceHint;
@property (retain, nonatomic) _INPBString *intentReference;
@property (readonly, nonatomic) BOOL hasIntentReference;
@property (copy, nonatomic) NSArray *roomNames;
@property (readonly, nonatomic) unsigned long long roomNamesCount;
@property (copy, nonatomic) NSArray *serviceGroups;
@property (readonly, nonatomic) unsigned long long serviceGroupsCount;
@property (copy, nonatomic) NSArray *serviceNames;
@property (readonly, nonatomic) unsigned long long serviceNamesCount;
@property (copy, nonatomic) NSArray *zoneNames;
@property (readonly, nonatomic) unsigned long long zoneNamesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)accessoryNamesType;
+ (Class)intentFromEntitiesType;
+ (Class)roomNamesType;
+ (Class)serviceGroupsType;
+ (Class)serviceNamesType;
+ (Class)zoneNamesType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (id)accessoryNamesAtIndex:(unsigned long long)a0;
- (void)addAccessoryNames:(id)a0;
- (void)addIntentFromEntities:(id)a0;
- (void)addRoomNames:(id)a0;
- (void)addServiceGroups:(id)a0;
- (void)addServiceNames:(id)a0;
- (void)addZoneNames:(id)a0;
- (void)clearAccessoryNames;
- (void)clearIntentFromEntities;
- (void)clearRoomNames;
- (void)clearServiceGroups;
- (void)clearServiceNames;
- (void)clearZoneNames;
- (id)intentFromEntitiesAtIndex:(unsigned long long)a0;
- (id)roomNamesAtIndex:(unsigned long long)a0;
- (id)serviceGroupsAtIndex:(unsigned long long)a0;
- (id)serviceNamesAtIndex:(unsigned long long)a0;
- (id)zoneNamesAtIndex:(unsigned long long)a0;

@end
