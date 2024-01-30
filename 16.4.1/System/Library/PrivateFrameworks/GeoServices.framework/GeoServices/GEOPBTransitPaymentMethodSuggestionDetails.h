@class PBDataReader, GEOFormattedString, NSMutableArray, PBUnknownFields;

@interface GEOPBTransitPaymentMethodSuggestionDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_educationalScreenAssets;
    GEOFormattedString *_educationalScreenHeader;
    NSMutableArray *_educationalScreenPaymentBodys;
    unsigned long long _paymentMethodRegionMuid;
    GEOFormattedString *_suggestionBody;
    GEOFormattedString *_suggestionTitle;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_paymentMethodRegionMuid : 1; unsigned char read_unknownFields : 1; unsigned char read_educationalScreenAssets : 1; unsigned char read_educationalScreenHeader : 1; unsigned char read_educationalScreenPaymentBodys : 1; unsigned char read_suggestionBody : 1; unsigned char read_suggestionTitle : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasPaymentMethodRegionMuid;
@property (nonatomic) unsigned long long paymentMethodRegionMuid;
@property (readonly, nonatomic) BOOL hasEducationalScreenHeader;
@property (retain, nonatomic) GEOFormattedString *educationalScreenHeader;
@property (retain, nonatomic) NSMutableArray *educationalScreenPaymentBodys;
@property (readonly, nonatomic) BOOL hasSuggestionTitle;
@property (retain, nonatomic) GEOFormattedString *suggestionTitle;
@property (readonly, nonatomic) BOOL hasSuggestionBody;
@property (retain, nonatomic) GEOFormattedString *suggestionBody;
@property (retain, nonatomic) NSMutableArray *educationalScreenAssets;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)educationalScreenAssetType;
+ (Class)educationalScreenPaymentBodyType;

- (id)initWithData:(id)a0;
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
- (void)addEducationalScreenAsset:(id)a0;
- (void)addEducationalScreenPaymentBody:(id)a0;
- (void)clearEducationalScreenAssets;
- (void)clearEducationalScreenPaymentBodys;
- (id)educationalScreenAssetAtIndex:(unsigned long long)a0;
- (unsigned long long)educationalScreenAssetsCount;
- (id)educationalScreenPaymentBodyAtIndex:(unsigned long long)a0;
- (unsigned long long)educationalScreenPaymentBodysCount;

@end
