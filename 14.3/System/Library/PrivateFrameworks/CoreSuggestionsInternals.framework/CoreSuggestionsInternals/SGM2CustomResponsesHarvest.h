@interface SGM2CustomResponsesHarvest : PBCodable <NSCopying> {
    struct { unsigned char customResponsesAfterPruning : 1; } _has;
}

@property (nonatomic) BOOL hasCustomResponsesAfterPruning;
@property (nonatomic) unsigned int customResponsesAfterPruning;

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
