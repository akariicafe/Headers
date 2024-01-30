@class CLPLOGENTRYVISIONVLLocalizationMaps488Details;

@interface CLPLOGENTRYVISIONVLLocalizationDebugInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMaps488Details;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLLocalizationMaps488Details *maps488Details;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
