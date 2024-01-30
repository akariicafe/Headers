@class NSString;

@interface NACVolumeWarningMessage : PBCodable <NSCopying> {
    struct { unsigned char originIdentifier : 1; unsigned char volumeWarningState : 1; unsigned char volumeWarningEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasVolumeWarningEnabled;
@property (nonatomic) BOOL volumeWarningEnabled;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) int originIdentifier;
@property (nonatomic) BOOL hasVolumeWarningState;
@property (nonatomic) int volumeWarningState;

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
