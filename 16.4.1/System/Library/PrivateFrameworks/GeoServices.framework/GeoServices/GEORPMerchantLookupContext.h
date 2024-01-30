@class NSString, GEOLocation, GEOPDMapsIdentifier, PBDataReader;

@interface GEORPMerchantLookupContext : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_correlationId;
    NSString *_merchantAdamId;
    NSString *_merchantFormattedAddress;
    GEOPDMapsIdentifier *_merchantId;
    NSString *_merchantIndustryCategory;
    long long _merchantIndustryCode;
    NSString *_merchantName;
    NSString *_merchantRawName;
    NSString *_merchantUrl;
    GEOLocation *_transactionLocation;
    double _transactionTime;
    NSString *_transactionType;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _requestTransactionType;
    BOOL _isAppleCard;
    struct { unsigned char has_merchantIndustryCode : 1; unsigned char has_transactionTime : 1; unsigned char has_requestTransactionType : 1; unsigned char has_isAppleCard : 1; unsigned char read_correlationId : 1; unsigned char read_merchantAdamId : 1; unsigned char read_merchantFormattedAddress : 1; unsigned char read_merchantId : 1; unsigned char read_merchantIndustryCategory : 1; unsigned char read_merchantName : 1; unsigned char read_merchantRawName : 1; unsigned char read_merchantUrl : 1; unsigned char read_transactionLocation : 1; unsigned char read_transactionType : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasMerchantIndustryCode;
@property (nonatomic) long long merchantIndustryCode;
@property (readonly, nonatomic) BOOL hasMerchantId;
@property (retain, nonatomic) GEOPDMapsIdentifier *merchantId;
@property (readonly, nonatomic) BOOL hasMerchantName;
@property (retain, nonatomic) NSString *merchantName;
@property (readonly, nonatomic) BOOL hasMerchantRawName;
@property (retain, nonatomic) NSString *merchantRawName;
@property (readonly, nonatomic) BOOL hasMerchantIndustryCategory;
@property (retain, nonatomic) NSString *merchantIndustryCategory;
@property (readonly, nonatomic) BOOL hasMerchantUrl;
@property (retain, nonatomic) NSString *merchantUrl;
@property (readonly, nonatomic) BOOL hasMerchantFormattedAddress;
@property (retain, nonatomic) NSString *merchantFormattedAddress;
@property (readonly, nonatomic) BOOL hasMerchantAdamId;
@property (retain, nonatomic) NSString *merchantAdamId;
@property (nonatomic) BOOL hasTransactionTime;
@property (nonatomic) double transactionTime;
@property (readonly, nonatomic) BOOL hasTransactionType;
@property (retain, nonatomic) NSString *transactionType;
@property (readonly, nonatomic) BOOL hasTransactionLocation;
@property (retain, nonatomic) GEOLocation *transactionLocation;
@property (readonly, nonatomic) BOOL hasCorrelationId;
@property (retain, nonatomic) NSString *correlationId;
@property (nonatomic) BOOL hasIsAppleCard;
@property (nonatomic) BOOL isAppleCard;
@property (nonatomic) BOOL hasRequestTransactionType;
@property (nonatomic) int requestTransactionType;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
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
- (void).cxx_destruct;
- (id)requestTransactionTypeAsString:(int)a0;
- (int)StringAsRequestTransactionType:(id)a0;

@end
