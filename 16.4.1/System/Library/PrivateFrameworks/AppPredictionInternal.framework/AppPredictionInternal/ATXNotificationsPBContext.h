@class ATXNotificationsPBContentFeatures;

@interface ATXNotificationsPBContext : PBCodable <NSCopying> {
    struct { unsigned char appLaunchPopularity : 1; unsigned char cleared : 1; unsigned char defaction : 1; unsigned char engaged : 1; unsigned char ignored : 1; unsigned char location : 1; unsigned char motionAtRecieve : 1; unsigned char orb : 1; unsigned char received : 1; unsigned char suppaction : 1; unsigned char tapcoa : 1; unsigned char totalLaunches : 1; unsigned char visits : 1; unsigned char isStationary : 1; } _has;
}

@property (nonatomic) BOOL hasReceived;
@property (nonatomic) float received;
@property (nonatomic) BOOL hasEngaged;
@property (nonatomic) float engaged;
@property (nonatomic) BOOL hasIgnored;
@property (nonatomic) float ignored;
@property (nonatomic) BOOL hasCleared;
@property (nonatomic) float cleared;
@property (nonatomic) BOOL hasAppLaunchPopularity;
@property (nonatomic) float appLaunchPopularity;
@property (nonatomic) BOOL hasTotalLaunches;
@property (nonatomic) float totalLaunches;
@property (nonatomic) BOOL hasMotionAtRecieve;
@property (nonatomic) int motionAtRecieve;
@property (nonatomic) BOOL hasIsStationary;
@property (nonatomic) BOOL isStationary;
@property (readonly, nonatomic) BOOL hasContentFeatures;
@property (retain, nonatomic) ATXNotificationsPBContentFeatures *contentFeatures;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) int location;
@property (nonatomic) BOOL hasVisits;
@property (nonatomic) int visits;
@property (nonatomic) BOOL hasDefaction;
@property (nonatomic) float defaction;
@property (nonatomic) BOOL hasOrb;
@property (nonatomic) float orb;
@property (nonatomic) BOOL hasSuppaction;
@property (nonatomic) float suppaction;
@property (nonatomic) BOOL hasTapcoa;
@property (nonatomic) float tapcoa;

- (id)motionAtRecieveAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)locationAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsLocation:(id)a0;
- (void).cxx_destruct;
- (int)StringAsMotionAtRecieve:(id)a0;

@end
