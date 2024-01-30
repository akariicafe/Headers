@class _MPCProtoItemIdentifierSet;

@interface _MPCProtoItem : PBCodable <NSCopying> {
    struct { unsigned char mediaType : 1; unsigned char excludeFromShuffle : 1; } _has;
}

@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) int mediaType;
@property (readonly, nonatomic) BOOL hasIdentifierSet;
@property (retain, nonatomic) _MPCProtoItemIdentifierSet *identifierSet;
@property (nonatomic) BOOL hasExcludeFromShuffle;
@property (nonatomic) BOOL excludeFromShuffle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
