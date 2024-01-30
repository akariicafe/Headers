@class GEOPDAdamAppIdentifier, PBDataReader, NSString, GEOLocation, GEOPDMerchantInformation, GEOPDWarsawMerchantIdentifier, PBUnknownFields;

@interface GEOPDMerchantLookupParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAdamAppIdentifier *_appIdentifier;
    NSString *_industryCategory;
    long long _industryCode;
    NSString *_merchantCode;
    GEOPDMerchantInformation *_merchantInformation;
    NSString *_paymentNetwork;
    NSString *_rawMerchantCode;
    NSString *_terminalId;
    NSString *_transactionCurrencyCode;
    NSString *_transactionId;
    double _transactionLocationAge;
    GEOLocation *_transactionLocation;
    double _transactionTimestamp;
    GEOPDWarsawMerchantIdentifier *_warsawMerchantIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _transactionStatus;
    int _transactionType;
    BOOL _coarseLocationUsed;
    BOOL _enableBrandMuidFallback;
    BOOL _fuzzyMatched;
    struct { unsigned char has_industryCode : 1; unsigned char has_transactionLocationAge : 1; unsigned char has_transactionTimestamp : 1; unsigned char has_transactionStatus : 1; unsigned char has_transactionType : 1; unsigned char has_coarseLocationUsed : 1; unsigned char has_enableBrandMuidFallback : 1; unsigned char has_fuzzyMatched : 1; unsigned char read_unknownFields : 1; unsigned char read_appIdentifier : 1; unsigned char read_industryCategory : 1; unsigned char read_merchantCode : 1; unsigned char read_merchantInformation : 1; unsigned char read_paymentNetwork : 1; unsigned char read_rawMerchantCode : 1; unsigned char read_terminalId : 1; unsigned char read_transactionCurrencyCode : 1; unsigned char read_transactionId : 1; unsigned char read_transactionLocation : 1; unsigned char read_warsawMerchantIdentifier : 1; unsigned char wrote_anyField : 1; } _flags;
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
