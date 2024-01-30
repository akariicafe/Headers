@class NSString;

@interface GEOPDSearchTokenCandidate : PBCodable <NSCopying> {
    NSString *_candidate;
    double _score;
    struct { unsigned char has_score : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
