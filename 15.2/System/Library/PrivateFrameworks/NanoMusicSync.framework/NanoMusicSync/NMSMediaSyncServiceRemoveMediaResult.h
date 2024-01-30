@interface NMSMediaSyncServiceRemoveMediaResult : PBCodable <NSCopying> {
    struct { unsigned char result : 1; } _has;
}

@property (nonatomic) BOOL hasResult;
@property (nonatomic) int result;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resultAsString:(int)a0;
- (int)StringAsResult:(id)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
