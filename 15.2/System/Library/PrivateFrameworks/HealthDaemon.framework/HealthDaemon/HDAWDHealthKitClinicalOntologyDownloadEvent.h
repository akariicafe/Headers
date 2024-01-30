@interface HDAWDHealthKitClinicalOntologyDownloadEvent : PBCodable <NSCopying> {
    struct { unsigned char currentOntologyVersion : 1; unsigned char hoursSinceLastAssetDownload : 1; unsigned char timestamp : 1; unsigned char downloadPhase : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasCurrentOntologyVersion;
@property (nonatomic) long long currentOntologyVersion;
@property (nonatomic) BOOL hasHoursSinceLastAssetDownload;
@property (nonatomic) long long hoursSinceLastAssetDownload;
@property (nonatomic) BOOL hasDownloadPhase;
@property (nonatomic) int downloadPhase;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)downloadPhaseAsString:(int)a0;
- (int)StringAsDownloadPhase:(id)a0;

@end
