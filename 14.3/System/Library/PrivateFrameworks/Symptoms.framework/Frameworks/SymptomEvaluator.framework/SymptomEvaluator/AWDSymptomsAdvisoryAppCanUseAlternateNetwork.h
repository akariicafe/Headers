@class NSString;

@interface AWDSymptomsAdvisoryAppCanUseAlternateNetwork : PBCodable <NSCopying> {
    struct { unsigned char allFlows : 1; unsigned char altUsage : 1; unsigned char jumboFlows : 1; unsigned char timestamp : 1; unsigned char wifiUsage : 1; unsigned char wwanUsage : 1; unsigned char bailOutOf : 1; unsigned char deliberation : 1; unsigned char rationale : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasBundleName;
@property (retain, nonatomic) NSString *bundleName;
@property (nonatomic) BOOL hasBailOutOf;
@property (nonatomic) int bailOutOf;
@property (nonatomic) BOOL hasDeliberation;
@property (nonatomic) int deliberation;
@property (nonatomic) BOOL hasRationale;
@property (nonatomic) int rationale;
@property (nonatomic) BOOL hasWwanUsage;
@property (nonatomic) unsigned long long wwanUsage;
@property (nonatomic) BOOL hasWifiUsage;
@property (nonatomic) unsigned long long wifiUsage;
@property (nonatomic) BOOL hasAltUsage;
@property (nonatomic) unsigned long long altUsage;
@property (nonatomic) BOOL hasAllFlows;
@property (nonatomic) unsigned long long allFlows;
@property (nonatomic) BOOL hasJumboFlows;
@property (nonatomic) unsigned long long jumboFlows;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)bailOutOfAsString:(int)a0;
- (int)StringAsBailOutOf:(id)a0;
- (id)deliberationAsString:(int)a0;
- (int)StringAsDeliberation:(id)a0;
- (id)rationaleAsString:(int)a0;
- (int)StringAsRationale:(id)a0;

@end
