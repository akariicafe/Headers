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
