@interface AWDCallHistoryCommCenterMigration : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char recordCount : 1; unsigned char version : 1; unsigned char success : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasRecordCount;
@property (nonatomic) unsigned int recordCount;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;

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
