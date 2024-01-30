@interface _MPCProtoTracklistIndexPath : PBCodable <NSCopying> {
    long long _containerIndex;
    long long _itemIndex;
    struct { unsigned char containerIndex : 1; unsigned char itemIndex : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
