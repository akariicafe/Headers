@interface AWDCoreRoutineLocationTypeItem : PBCodable <NSCopying> {
    struct { unsigned char locationType : 1; unsigned char percentage : 1; } _has;
}

@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) int locationType;
@property (nonatomic) BOOL hasPercentage;
@property (nonatomic) int percentage;

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
