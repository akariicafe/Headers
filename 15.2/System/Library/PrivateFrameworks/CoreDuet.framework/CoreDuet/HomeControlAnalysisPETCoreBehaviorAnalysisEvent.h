@class NSString;

@interface HomeControlAnalysisPETCoreBehaviorAnalysisEvent : PBCodable <NSCopying> {
    struct { unsigned char homeOccupancy : 1; } _has;
}

@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasEventStreamTitle;
@property (retain, nonatomic) NSString *eventStreamTitle;
@property (readonly, nonatomic) BOOL hasHomekitSource;
@property (retain, nonatomic) NSString *homekitSource;
@property (readonly, nonatomic) BOOL hasHomeUUID;
@property (retain, nonatomic) NSString *homeUUID;
@property (readonly, nonatomic) BOOL hasMicrolocation;
@property (retain, nonatomic) NSString *microlocation;
@property (nonatomic) BOOL hasHomeOccupancy;
@property (nonatomic) unsigned int homeOccupancy;
@property (readonly, nonatomic) BOOL hasAccessoryUUID;
@property (retain, nonatomic) NSString *accessoryUUID;
@property (readonly, nonatomic) BOOL hasServiceUUID;
@property (retain, nonatomic) NSString *serviceUUID;
@property (readonly, nonatomic) BOOL hasServiceType;
@property (retain, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) BOOL hasSceneUUID;
@property (retain, nonatomic) NSString *sceneUUID;
@property (readonly, nonatomic) BOOL hasAssociatedAccessoryUUIDs;
@property (retain, nonatomic) NSString *associatedAccessoryUUIDs;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *value;
@property (readonly, nonatomic) BOOL hasCharacteristicType;
@property (retain, nonatomic) NSString *characteristicType;

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

@end
