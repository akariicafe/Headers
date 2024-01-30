@interface HKCodableDayIndexRange : PBCodable <NSCopying> {
    struct { unsigned char dayIndex : 1; unsigned char duration : 1; } _has;
}

@property (nonatomic) BOOL hasDayIndex;
@property (nonatomic) long long dayIndex;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) long long duration;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
