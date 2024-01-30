@interface GEORPFeatureHandle : PBCodable <NSCopying> {
    struct GEORPFeatureHandleStyleAttribute { int x0; int x1; } *_styleAttributes;
    unsigned long long _styleAttributesCount;
    unsigned long long _styleAttributesSpace;
    unsigned int _featureIndex;
    unsigned int _featureTileX;
    unsigned int _featureTileY;
    unsigned int _featureTileZ;
    unsigned int _identifier;
    int _style;
    int _type;
    struct { unsigned char has_featureIndex : 1; unsigned char has_featureTileX : 1; unsigned char has_featureTileY : 1; unsigned char has_featureTileZ : 1; unsigned char has_identifier : 1; unsigned char has_style : 1; unsigned char has_type : 1; } _flags;
}

@property (nonatomic) BOOL hasFeatureIndex;
@property (nonatomic) unsigned int featureIndex;
@property (nonatomic) BOOL hasFeatureTileX;
@property (nonatomic) unsigned int featureTileX;
@property (nonatomic) BOOL hasFeatureTileY;
@property (nonatomic) unsigned int featureTileY;
@property (nonatomic) BOOL hasFeatureTileZ;
@property (nonatomic) unsigned int featureTileZ;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) int style;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) unsigned long long styleAttributesCount;
@property (readonly, nonatomic) struct GEORPFeatureHandleStyleAttribute { int x0; int x1; } *styleAttributes;

+ (BOOL)isValid:(id)a0;

- (int)StringAsStyle:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)styleAsString:(int)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)typeAsString:(int)a0;
- (void)addStyleAttribute:(struct GEORPFeatureHandleStyleAttribute { int x0; int x1; })a0;
- (void)clearStyleAttributes;
- (void)setStyleAttributes:(struct GEORPFeatureHandleStyleAttribute { int x0; int x1; } *)a0 count:(unsigned long long)a1;
- (struct GEORPFeatureHandleStyleAttribute { int x0; int x1; })styleAttributeAtIndex:(unsigned long long)a0;

@end
