@class NSString;

@interface AWDCallHistoryDatabaseSaveError : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char domain : 1; unsigned char error : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) unsigned int domain;
@property (nonatomic) BOOL hasError;
@property (nonatomic) unsigned int error;
@property (readonly, nonatomic) BOOL hasTable;
@property (retain, nonatomic) NSString *table;

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
