@class NSString;

@interface VKPShieldIndexEntry : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _defaultForFeatureTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _shieldTypes;
}

@property (readonly, nonatomic) BOOL hasArtworkIdentifier;
@property (retain, nonatomic) NSString *artworkIdentifier;
@property (readonly, nonatomic) unsigned long long shieldTypesCount;
@property (readonly, nonatomic) int *shieldTypes;
@property (readonly, nonatomic) unsigned long long defaultForFeatureTypesCount;
@property (readonly, nonatomic) int *defaultForFeatureTypes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)clearShieldTypes;
- (int)shieldTypesAtIndex:(unsigned long long)a0;
- (void)addShieldTypes:(int)a0;
- (void)clearDefaultForFeatureTypes;
- (int)defaultForFeatureTypeAtIndex:(unsigned long long)a0;
- (void)addDefaultForFeatureType:(int)a0;
- (void)setShieldTypes:(int *)a0 count:(unsigned long long)a1;
- (void)setDefaultForFeatureTypes:(int *)a0 count:(unsigned long long)a1;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
