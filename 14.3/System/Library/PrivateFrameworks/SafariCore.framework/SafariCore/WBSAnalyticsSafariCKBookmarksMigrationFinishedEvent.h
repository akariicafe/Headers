@class NSString;

@interface WBSAnalyticsSafariCKBookmarksMigrationFinishedEvent : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; unsigned char migratorType : 1; unsigned char result : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasMigratorType;
@property (nonatomic) int migratorType;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) int result;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) BOOL hasErrorCode;
@property (retain, nonatomic) NSString *errorCode;

- (void).cxx_destruct;
- (id)migratorTypeAsString:(int)a0;
- (int)StringAsMigratorType:(id)a0;
- (id)resultAsString:(int)a0;
- (int)StringAsResult:(id)a0;
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
