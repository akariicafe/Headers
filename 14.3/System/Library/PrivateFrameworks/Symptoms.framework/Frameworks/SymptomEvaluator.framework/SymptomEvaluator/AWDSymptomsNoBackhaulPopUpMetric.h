@interface AWDSymptomsNoBackhaulPopUpMetric : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char action : 1; unsigned char networkType : 1; unsigned char networksShownAtLeastOnceInLast24Hrs : 1; unsigned char popUpShownForSecs : 1; unsigned char timeSinceShownOnSameNetworkSecs : 1; unsigned char timesShownOnAnyNetworkLast24Hrs : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) BOOL hasPopUpShownForSecs;
@property (nonatomic) unsigned int popUpShownForSecs;
@property (nonatomic) BOOL hasTimeSinceShownOnSameNetworkSecs;
@property (nonatomic) unsigned int timeSinceShownOnSameNetworkSecs;
@property (nonatomic) BOOL hasTimesShownOnAnyNetworkLast24Hrs;
@property (nonatomic) unsigned int timesShownOnAnyNetworkLast24Hrs;
@property (nonatomic) BOOL hasNetworksShownAtLeastOnceInLast24Hrs;
@property (nonatomic) unsigned int networksShownAtLeastOnceInLast24Hrs;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) int action;

- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)actionAsString:(int)a0;
- (int)StringAsAction:(id)a0;

@end
