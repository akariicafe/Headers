@interface NTPBAlternateHeadline : PBCodable <NSCopying> {
    struct { unsigned char articleHeadlineTreatmentId : 1; unsigned char articleHeadlineTreatmentState : 1; } _has;
}

@property (nonatomic) BOOL hasArticleHeadlineTreatmentState;
@property (nonatomic) int articleHeadlineTreatmentState;
@property (nonatomic) BOOL hasArticleHeadlineTreatmentId;
@property (nonatomic) int articleHeadlineTreatmentId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
