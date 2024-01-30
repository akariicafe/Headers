@class _MPCProtoItemIdentifierSet;

@interface _MPCProtoItem : PBCodable <NSCopying> {
    _MPCProtoItemIdentifierSet *_identifierSet;
    int _mediaType;
    BOOL _excludeFromShuffle;
    struct { unsigned char mediaType : 1; unsigned char excludeFromShuffle : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
