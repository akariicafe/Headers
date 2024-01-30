@interface RMRemoteManagementScreenTimeNumberOfLimits : PBCodable <NSCopying> {
    struct { unsigned char numberOfAppLimits : 1; unsigned char numberOfCategoryLimits : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNumberOfAppLimits;
@property (nonatomic) unsigned long long numberOfAppLimits;
@property (nonatomic) BOOL hasNumberOfCategoryLimits;
@property (nonatomic) unsigned long long numberOfCategoryLimits;

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
