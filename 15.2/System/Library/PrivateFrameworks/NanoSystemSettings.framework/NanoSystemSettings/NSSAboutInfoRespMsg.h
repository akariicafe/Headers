@interface NSSAboutInfoRespMsg : PBCodable <NSCopying> {
    struct { unsigned char availableStorageInBytes : 1; unsigned char batteryCurrentCapacity : 1; unsigned char numberOfApps : 1; unsigned char numberOfPhotos : 1; unsigned char numberOfSongs : 1; unsigned char purgeableSpace : 1; unsigned char userDeletableSpace : 1; unsigned char batteryIsCharging : 1; } _has;
}

@property (nonatomic) BOOL hasAvailableStorageInBytes;
@property (nonatomic) unsigned long long availableStorageInBytes;
@property (nonatomic) BOOL hasNumberOfApps;
@property (nonatomic) unsigned long long numberOfApps;
@property (nonatomic) BOOL hasNumberOfSongs;
@property (nonatomic) unsigned long long numberOfSongs;
@property (nonatomic) BOOL hasNumberOfPhotos;
@property (nonatomic) unsigned long long numberOfPhotos;
@property (nonatomic) BOOL hasBatteryCurrentCapacity;
@property (nonatomic) unsigned long long batteryCurrentCapacity;
@property (nonatomic) BOOL hasBatteryIsCharging;
@property (nonatomic) BOOL batteryIsCharging;
@property (nonatomic) BOOL hasPurgeableSpace;
@property (nonatomic) unsigned long long purgeableSpace;
@property (nonatomic) BOOL hasUserDeletableSpace;
@property (nonatomic) unsigned long long userDeletableSpace;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
