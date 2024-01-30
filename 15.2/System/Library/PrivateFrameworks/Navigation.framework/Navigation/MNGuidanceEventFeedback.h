@class NSUUID, NSString, NSData, NSMutableArray;

@interface MNGuidanceEventFeedback : PBCodable <NSCopying> {
    struct { unsigned char endDistance : 1; unsigned char endTime : 1; unsigned char maneuverTime : 1; unsigned char startDistance : 1; unsigned char startTime : 1; unsigned char vehicleSpeed : 1; unsigned char enrouteNoticeIndex : 1; unsigned char eventIndex : 1; unsigned char selectedPrimaryStringIndex : 1; unsigned char selectedSecondaryStringIndex : 1; unsigned char stepID : 1; unsigned char trafficCameraType : 1; unsigned char trafficColor : 1; unsigned char type : 1; unsigned char shortPrompt : 1; } _has;
}

@property (readonly, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) BOOL hasUniqueIDstring;
@property (retain, nonatomic) NSString *uniqueIDstring;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) BOOL hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) BOOL hasEnrouteNoticeIndex;
@property (nonatomic) unsigned int enrouteNoticeIndex;
@property (nonatomic) BOOL hasEventIndex;
@property (nonatomic) unsigned int eventIndex;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL hasStartDistance;
@property (nonatomic) double startDistance;
@property (nonatomic) BOOL hasVehicleSpeed;
@property (nonatomic) double vehicleSpeed;
@property (nonatomic) BOOL hasTrafficColor;
@property (nonatomic) unsigned int trafficColor;
@property (nonatomic) BOOL hasSelectedPrimaryStringIndex;
@property (nonatomic) unsigned int selectedPrimaryStringIndex;
@property (nonatomic) BOOL hasSelectedSecondaryStringIndex;
@property (nonatomic) unsigned int selectedSecondaryStringIndex;
@property (nonatomic) BOOL hasShortPrompt;
@property (nonatomic) BOOL shortPrompt;
@property (nonatomic) BOOL hasEndTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL hasEndDistance;
@property (nonatomic) double endDistance;
@property (nonatomic) BOOL hasManeuverTime;
@property (nonatomic) double maneuverTime;
@property (retain, nonatomic) NSMutableArray *junctionViewImageIDs;
@property (readonly, nonatomic) BOOL hasEnrouteNoticeIdentifier;
@property (retain, nonatomic) NSString *enrouteNoticeIdentifier;
@property (nonatomic) BOOL hasTrafficCameraType;
@property (nonatomic) unsigned int trafficCameraType;
@property (readonly, nonatomic) BOOL hasEventDescription;
@property (retain, nonatomic) NSString *eventDescription;

+ (Class)junctionViewImageIDType;

- (id)initWithEvent:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addJunctionViewImageID:(id)a0;
- (unsigned long long)junctionViewImageIDsCount;
- (void)clearJunctionViewImageIDs;
- (id)junctionViewImageIDAtIndex:(unsigned long long)a0;

@end
