@interface AWDMailUserSuggestionsEngagment : PBCodable <NSCopying> {
    struct { unsigned char searchTermLength : 1; unsigned char topHitsPresent : 1; unsigned char userSelectedTopHit : 1; } _has;
}

@property (nonatomic) BOOL hasTopHitsPresent;
@property (nonatomic) BOOL topHitsPresent;
@property (nonatomic) BOOL hasUserSelectedTopHit;
@property (nonatomic) BOOL userSelectedTopHit;
@property (nonatomic) BOOL hasSearchTermLength;
@property (nonatomic) long long searchTermLength;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithSearchTermLength:(unsigned long long)a0 topHitsPresent:(BOOL)a1 userSelectedTopHit:(BOOL)a2;

@end
