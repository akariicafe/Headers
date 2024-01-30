@class GEOStyleAttributes, NSString, PBUnknownFields;

@interface GEOPBTransitIcon : PBCodable <GEOTransitIconDataSource, NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _cartoId;
    unsigned int _transitTypeEnumValue;
    struct { unsigned char has_cartoId : 1; unsigned char has_transitTypeEnumValue : 1; } _flags;
}

@property (readonly, nonatomic) int iconType;
@property (readonly, nonatomic) unsigned int cartoID;
@property (readonly, nonatomic) unsigned int defaultTransitType;
@property (readonly, nonatomic) unsigned int iconAttributeKey;
@property (readonly, nonatomic) unsigned int iconAttributeValue;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasCartoId;
@property (nonatomic) unsigned int cartoId;
@property (nonatomic) BOOL hasTransitTypeEnumValue;
@property (nonatomic) unsigned int transitTypeEnumValue;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)_firstAttribute;

@end
