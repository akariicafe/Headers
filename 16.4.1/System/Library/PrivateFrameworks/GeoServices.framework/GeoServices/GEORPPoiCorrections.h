@class NSString, GEORPCategoryCorrections, PBDataReader, PBUnknownFields, GEORPAmenityCorrections, NSMutableArray, GEORPPlaceContainmentCorrections, GEORPAddressCorrections;

@interface GEORPPoiCorrections : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAddressCorrections *_address;
    GEORPAmenityCorrections *_amenity;
    NSMutableArray *_businessHours;
    GEORPCategoryCorrections *_category;
    GEORPPlaceContainmentCorrections *_containmentCorrections;
    NSString *_hoursText;
    NSString *_name;
    NSString *_originalName;
    NSString *_originalPhone;
    NSString *_originalUrl;
    NSString *_phone;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _flagBadCuratedCollectionDescription;
    BOOL _flagBrokenCuratedCollectionUrl;
    BOOL _flagHoursIncorrect;
    BOOL _flagNotAtThisAddress;
    struct { unsigned char has_flagBadCuratedCollectionDescription : 1; unsigned char has_flagBrokenCuratedCollectionUrl : 1; unsigned char has_flagHoursIncorrect : 1; unsigned char has_flagNotAtThisAddress : 1; unsigned char read_unknownFields : 1; unsigned char read_address : 1; unsigned char read_amenity : 1; unsigned char read_businessHours : 1; unsigned char read_category : 1; unsigned char read_containmentCorrections : 1; unsigned char read_hoursText : 1; unsigned char read_name : 1; unsigned char read_originalName : 1; unsigned char read_originalPhone : 1; unsigned char read_originalUrl : 1; unsigned char read_phone : 1; unsigned char read_url : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasPhone;
@property (retain, nonatomic) NSString *phone;
@property (readonly, nonatomic) BOOL hasAddress;
@property (retain, nonatomic) GEORPAddressCorrections *address;
@property (retain, nonatomic) NSMutableArray *businessHours;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) GEORPCategoryCorrections *category;
@property (readonly, nonatomic) BOOL hasAmenity;
@property (retain, nonatomic) GEORPAmenityCorrections *amenity;
@property (nonatomic) BOOL hasFlagHoursIncorrect;
@property (nonatomic) BOOL flagHoursIncorrect;
@property (nonatomic) BOOL hasFlagNotAtThisAddress;
@property (nonatomic) BOOL flagNotAtThisAddress;
@property (readonly, nonatomic) BOOL hasOriginalName;
@property (retain, nonatomic) NSString *originalName;
@property (readonly, nonatomic) BOOL hasOriginalPhone;
@property (retain, nonatomic) NSString *originalPhone;
@property (readonly, nonatomic) BOOL hasOriginalUrl;
@property (retain, nonatomic) NSString *originalUrl;
@property (readonly, nonatomic) BOOL hasHoursText;
@property (retain, nonatomic) NSString *hoursText;
@property (readonly, nonatomic) BOOL hasContainmentCorrections;
@property (retain, nonatomic) GEORPPlaceContainmentCorrections *containmentCorrections;
@property (nonatomic) BOOL hasFlagBrokenCuratedCollectionUrl;
@property (nonatomic) BOOL flagBrokenCuratedCollectionUrl;
@property (nonatomic) BOOL hasFlagBadCuratedCollectionDescription;
@property (nonatomic) BOOL flagBadCuratedCollectionDescription;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)businessHoursType;

- (id)initWithData:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (void)addBusinessHours:(id)a0;
- (id)businessHoursAtIndex:(unsigned long long)a0;
- (unsigned long long)businessHoursCount;
- (void)clearBusinessHours;

@end
