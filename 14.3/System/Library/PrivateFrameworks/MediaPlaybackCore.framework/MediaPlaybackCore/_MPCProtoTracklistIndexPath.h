@interface _MPCProtoTracklistIndexPath : PBCodable <NSCopying> {
    struct { unsigned char containerIndex : 1; unsigned char itemIndex : 1; } _has;
}

@property (nonatomic) BOOL hasContainerIndex;
@property (nonatomic) long long containerIndex;
@property (nonatomic) BOOL hasItemIndex;
@property (nonatomic) long long itemIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
