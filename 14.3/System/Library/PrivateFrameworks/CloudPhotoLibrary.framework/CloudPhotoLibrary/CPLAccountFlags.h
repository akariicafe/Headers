@interface CPLAccountFlags : PBCodable <NSCopying> {
    struct { unsigned char version : 1; unsigned char reason : 1; unsigned char defaultHEVC : 1; } _has;
}

@property (nonatomic) BOOL hasDefaultHEVC;
@property (nonatomic) BOOL defaultHEVC;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)reasonAsString:(int)a0;
- (int)StringAsReason:(id)a0;

@end
