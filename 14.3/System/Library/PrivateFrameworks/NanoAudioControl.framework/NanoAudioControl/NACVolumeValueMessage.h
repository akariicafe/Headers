@class NSString;

@interface NACVolumeValueMessage : PBCodable <NSCopying> {
    struct { unsigned char originIdentifier : 1; unsigned char volumeValue : 1; } _has;
}

@property (nonatomic) BOOL hasVolumeValue;
@property (nonatomic) float volumeValue;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) int originIdentifier;

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

@end
