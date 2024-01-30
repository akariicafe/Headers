@class NSMutableArray, PBUnknownFields;

@interface GEOPDAmenities : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_amenitys;
}

@property (retain, nonatomic) NSMutableArray *amenitys;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)amenityType;
+ (id)amentiesForPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (BOOL)hasAmenityType:(int)a0;
- (BOOL)valueForAmenityType:(int)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addAmenity:(id)a0;
- (unsigned long long)amenitysCount;
- (void)clearAmenitys;
- (id)amenityAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
