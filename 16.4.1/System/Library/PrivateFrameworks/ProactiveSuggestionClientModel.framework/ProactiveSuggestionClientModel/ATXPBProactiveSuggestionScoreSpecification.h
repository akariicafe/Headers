@interface ATXPBProactiveSuggestionScoreSpecification : PBCodable <NSCopying> {
    struct { unsigned char rawScore : 1; unsigned char suggestedConfidenceCategory : 1; } _has;
}

@property (nonatomic) BOOL hasRawScore;
@property (nonatomic) double rawScore;
@property (nonatomic) BOOL hasSuggestedConfidenceCategory;
@property (nonatomic) int suggestedConfidenceCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsSuggestedConfidenceCategory:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)suggestedConfidenceCategoryAsString:(int)a0;

@end
