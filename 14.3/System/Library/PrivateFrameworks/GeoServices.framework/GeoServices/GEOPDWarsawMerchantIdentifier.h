@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPDWarsawMerchantIdentifier : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_merchantDomain;
    NSString *_merchantId;
    NSString *_merchantName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_merchantDomain : 1; unsigned char read_merchantId : 1; unsigned char read_merchantName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMerchantDomain;
@property (retain, nonatomic) NSString *merchantDomain;
@property (readonly, nonatomic) BOOL hasMerchantName;
@property (retain, nonatomic) NSString *merchantName;
@property (readonly, nonatomic) BOOL hasMerchantId;
@property (retain, nonatomic) NSString *merchantId;
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
