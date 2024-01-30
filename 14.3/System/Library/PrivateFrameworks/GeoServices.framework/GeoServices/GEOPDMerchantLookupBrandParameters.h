@class GEOPDAdamAppIdentifier, NSString, PBUnknownFields, PBDataReader, GEOPDWarsawMerchantIdentifier;

@interface GEOPDMerchantLookupBrandParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAdamAppIdentifier *_appIdentifier;
    NSString *_merchantCanl;
    NSString *_merchantCode;
    NSString *_merchantId;
    NSString *_rawMerchantCode;
    GEOPDWarsawMerchantIdentifier *_warsawIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_appIdentifier : 1; unsigned char read_merchantCanl : 1; unsigned char read_merchantCode : 1; unsigned char read_merchantId : 1; unsigned char read_rawMerchantCode : 1; unsigned char read_warsawIdentifier : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMerchantCode;
@property (retain, nonatomic) NSString *merchantCode;
@property (readonly, nonatomic) BOOL hasRawMerchantCode;
@property (retain, nonatomic) NSString *rawMerchantCode;
@property (readonly, nonatomic) BOOL hasWarsawIdentifier;
@property (retain, nonatomic) GEOPDWarsawMerchantIdentifier *warsawIdentifier;
@property (readonly, nonatomic) BOOL hasAppIdentifier;
@property (retain, nonatomic) GEOPDAdamAppIdentifier *appIdentifier;
@property (readonly, nonatomic) BOOL hasMerchantId;
@property (retain, nonatomic) NSString *merchantId;
@property (readonly, nonatomic) BOOL hasMerchantCanl;
@property (retain, nonatomic) NSString *merchantCanl;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
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
