@class NSString, PBUnknownFields;

@interface GEOPDAmenityValue : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_vendorId;
    int _amenityType;
    BOOL _amenityPresent;
    struct { unsigned char has_amenityType : 1; unsigned char has_amenityPresent : 1; } _flags;
}

@property (nonatomic) BOOL hasAmenityType;
@property (nonatomic) int amenityType;
@property (nonatomic) BOOL hasAmenityPresent;
@property (nonatomic) BOOL amenityPresent;
@property (readonly, nonatomic) BOOL hasVendorId;
@property (retain, nonatomic) NSString *vendorId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)amenityTypeAsString:(int)a0;
- (int)StringAsAmenityType:(id)a0;
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
