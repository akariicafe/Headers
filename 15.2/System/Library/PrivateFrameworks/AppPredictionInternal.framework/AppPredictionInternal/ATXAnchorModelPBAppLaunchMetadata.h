@class NSString, ATXAnchorModelPBLaunchHistoryMetadata;

@interface ATXAnchorModelPBAppLaunchMetadata : PBCodable <NSCopying> {
    struct { unsigned char app2VecCluster : 1; unsigned char genreId : 1; unsigned char relativeTimeSinceAnchorInSeconds : 1; unsigned char appInstalledInLast48Hours : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasAppLaunchHistory;
@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *appLaunchHistory;
@property (nonatomic) BOOL hasAppInstalledInLast48Hours;
@property (nonatomic) BOOL appInstalledInLast48Hours;
@property (nonatomic) BOOL hasRelativeTimeSinceAnchorInSeconds;
@property (nonatomic) int relativeTimeSinceAnchorInSeconds;
@property (nonatomic) BOOL hasGenreId;
@property (nonatomic) long long genreId;
@property (nonatomic) BOOL hasApp2VecCluster;
@property (nonatomic) long long app2VecCluster;

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
