@interface HKCodableDayIndexRange : PBCodable <NSCopying> {
    struct APPLE_155 { unsigned char dayIndex : 1; unsigned char duration : 1; } _has;
}

@property (nonatomic) BOOL hasDayIndex;
@property (nonatomic) long long dayIndex;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) long long duration;

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
