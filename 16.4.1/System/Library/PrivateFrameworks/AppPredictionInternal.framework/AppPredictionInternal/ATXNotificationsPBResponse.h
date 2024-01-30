@class NSString;

@interface ATXNotificationsPBResponse : PBCodable <NSCopying> {
    struct { unsigned char appPopularity : 1; unsigned char cleared : 1; unsigned char defaultActions : 1; unsigned char engaged : 1; unsigned char ignored : 1; unsigned char orbs : 1; unsigned char received : 1; unsigned char response : 1; unsigned char stype : 1; unsigned char suppActions : 1; unsigned char tapCoalesce : 1; unsigned char totalLaunches : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasTopic;
@property (retain, nonatomic) NSString *topic;
@property (nonatomic) BOOL hasResponse;
@property (nonatomic) int response;
@property (nonatomic) BOOL hasReceived;
@property (nonatomic) float received;
@property (nonatomic) BOOL hasEngaged;
@property (nonatomic) float engaged;
@property (nonatomic) BOOL hasIgnored;
@property (nonatomic) float ignored;
@property (nonatomic) BOOL hasCleared;
@property (nonatomic) float cleared;
@property (nonatomic) BOOL hasStype;
@property (nonatomic) int stype;
@property (nonatomic) BOOL hasAppPopularity;
@property (nonatomic) float appPopularity;
@property (nonatomic) BOOL hasTotalLaunches;
@property (nonatomic) float totalLaunches;
@property (nonatomic) BOOL hasDefaultActions;
@property (nonatomic) float defaultActions;
@property (nonatomic) BOOL hasOrbs;
@property (nonatomic) float orbs;
@property (nonatomic) BOOL hasSuppActions;
@property (nonatomic) float suppActions;
@property (nonatomic) BOOL hasTapCoalesce;
@property (nonatomic) float tapCoalesce;
@property (readonly, nonatomic) BOOL hasCountry;
@property (retain, nonatomic) NSString *country;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsStype:(id)a0;
- (int)StringAsResponse:(id)a0;
- (id)responseAsString:(int)a0;
- (id)stypeAsString:(int)a0;

@end
