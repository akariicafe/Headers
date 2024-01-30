@interface AWDCallHistoryDatabaseMigration : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char domain : 1; unsigned char error : 1; unsigned char newSchema : 1; unsigned char oldSchema : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasOldSchema;
@property (nonatomic) unsigned int oldSchema;
@property (nonatomic) BOOL hasNewSchema;
@property (nonatomic) unsigned int newSchema;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) unsigned int domain;
@property (nonatomic) BOOL hasError;
@property (nonatomic) unsigned int error;

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
