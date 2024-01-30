@interface NTPBReadingListShow : PBCodable <NSCopying> {
    struct { unsigned char userAction : 1; } _has;
}

@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) int userAction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
