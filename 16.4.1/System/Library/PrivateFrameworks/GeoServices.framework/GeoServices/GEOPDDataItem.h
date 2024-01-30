@class GEOPDBusinessHoursData, PBDataReader, GEOPDLocationData, GEOPDCategoryData, GEOPDFactoidData, GEOPDRatingData, PBUnknownFields;

@interface GEOPDDataItem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDBusinessHoursData *_businessHoursData;
    GEOPDCategoryData *_categoryData;
    GEOPDFactoidData *_factoidData;
    GEOPDLocationData *_locationData;
    GEOPDRatingData *_ratingData;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_businessHoursData : 1; unsigned char read_categoryData : 1; unsigned char read_factoidData : 1; unsigned char read_locationData : 1; unsigned char read_ratingData : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)locationName;
- (void).cxx_destruct;
- (id)categoryName;

@end
