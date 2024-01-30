@class NSString;

@interface HomeControlAnalysisPETCoreBehaviorAnalysisEvent : PBCodable <NSCopying> {
    double _timestamp;
    NSString *_accessoryUUID;
    NSString *_associatedAccessoryUUIDs;
    NSString *_characteristicType;
    NSString *_eventStreamTitle;
    unsigned int _homeOccupancy;
    NSString *_homeUUID;
    NSString *_homekitSource;
    NSString *_microlocation;
    NSString *_sceneUUID;
    NSString *_serviceType;
    NSString *_serviceUUID;
    NSString *_value;
    struct { unsigned char homeOccupancy : 1; } _has;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
