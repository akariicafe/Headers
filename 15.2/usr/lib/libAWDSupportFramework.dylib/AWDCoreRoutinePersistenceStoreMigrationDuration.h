@interface AWDCoreRoutinePersistenceStoreMigrationDuration : PBCodable <NSCopying> {
    struct { unsigned char migrationTimeInterval : 1; unsigned char timestamp : 1; unsigned char byteSize : 1; unsigned char deviceClass : 1; unsigned char nextModelVersion : 1; unsigned char previousModelVersion : 1; unsigned char storeType : 1; unsigned char didVacuum : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasStoreType;
@property (nonatomic) int storeType;
@property (nonatomic) BOOL hasMigrationTimeInterval;
@property (nonatomic) double migrationTimeInterval;
@property (nonatomic) BOOL hasDidVacuum;
@property (nonatomic) BOOL didVacuum;
@property (nonatomic) BOOL hasDeviceClass;
@property (nonatomic) int deviceClass;
@property (nonatomic) BOOL hasPreviousModelVersion;
@property (nonatomic) int previousModelVersion;
@property (nonatomic) BOOL hasNextModelVersion;
@property (nonatomic) int nextModelVersion;
@property (nonatomic) BOOL hasByteSize;
@property (nonatomic) int byteSize;

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
