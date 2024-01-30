@interface BMPBSchoolTimeEvent : PBCodable <NSCopying> {
    struct { unsigned char reason : 1; unsigned char starting : 1; } _has;
}

@property (nonatomic) BOOL hasStarting;
@property (nonatomic) BOOL starting;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;

- (id)reasonAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (int)StringAsReason:(id)a0;
- (id)dictionaryRepresentation;

@end
