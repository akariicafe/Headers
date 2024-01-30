@class NSData, NSString;

@interface AWDWiFiMetricsKnownNetworksEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char colocatedState : 1; unsigned char eventType : 1; unsigned char networkScore : 1; unsigned char networkSecurity : 1; unsigned char networkTypeBitMap : 1; unsigned char switchToCount : 1; unsigned char switchedAwayFromCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) BOOL hasNetworkTypeBitMap;
@property (nonatomic) unsigned int networkTypeBitMap;
@property (nonatomic) BOOL hasNetworkSecurity;
@property (nonatomic) unsigned int networkSecurity;
@property (readonly, nonatomic) BOOL hasOui;
@property (retain, nonatomic) NSData *oui;
@property (nonatomic) BOOL hasColocatedState;
@property (nonatomic) unsigned int colocatedState;
@property (nonatomic) BOOL hasSwitchedAwayFromCount;
@property (nonatomic) unsigned int switchedAwayFromCount;
@property (nonatomic) BOOL hasSwitchToCount;
@property (nonatomic) unsigned int switchToCount;
@property (nonatomic) BOOL hasNetworkScore;
@property (nonatomic) int networkScore;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
