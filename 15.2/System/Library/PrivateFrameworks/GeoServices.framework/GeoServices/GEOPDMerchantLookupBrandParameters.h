@class GEOPDAdamAppIdentifier, PBDataReader, NSString, GEOPDWarsawMerchantIdentifier, PBUnknownFields;

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

- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
