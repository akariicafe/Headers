@interface AWDDuetExpertCenterZKWOutcome : PBCodable <NSCopying> {
    struct { unsigned char egress : 1; unsigned char expert : 1; unsigned char timestamp : 1; unsigned char itemsShown : 1; unsigned char engaged : 1; unsigned char itemSelected : 1; unsigned char sameCategorySelected : 1; unsigned char typedQuery : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasExpert;
@property (nonatomic) unsigned long long expert;
@property (nonatomic) BOOL hasEngaged;
@property (nonatomic) BOOL engaged;
@property (nonatomic) BOOL hasItemsShown;
@property (nonatomic) unsigned int itemsShown;
@property (nonatomic) BOOL hasTypedQuery;
@property (nonatomic) BOOL typedQuery;
@property (nonatomic) BOOL hasItemSelected;
@property (nonatomic) BOOL itemSelected;
@property (nonatomic) BOOL hasEgress;
@property (nonatomic) unsigned long long egress;
@property (nonatomic) BOOL hasSameCategorySelected;
@property (nonatomic) BOOL sameCategorySelected;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
