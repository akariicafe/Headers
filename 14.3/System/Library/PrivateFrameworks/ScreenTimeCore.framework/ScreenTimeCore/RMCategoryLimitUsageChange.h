@class NSString;

@interface RMCategoryLimitUsageChange : PBCodable <NSCopying> {
    struct { unsigned char changeInUsage : 1; unsigned char daysSinceCreationDate : 1; unsigned char noCreationDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLimitedCategory;
@property (retain, nonatomic) NSString *limitedCategory;
@property (nonatomic) BOOL hasDaysSinceCreationDate;
@property (nonatomic) unsigned long long daysSinceCreationDate;
@property (nonatomic) BOOL hasChangeInUsage;
@property (nonatomic) long long changeInUsage;
@property (readonly, nonatomic) BOOL hasLimitType;
@property (retain, nonatomic) NSString *limitType;
@property (nonatomic) BOOL hasNoCreationDate;
@property (nonatomic) BOOL noCreationDate;

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
