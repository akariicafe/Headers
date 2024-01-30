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

@end
