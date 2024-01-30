@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPTdmFraudNotificationParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_anonymousId;
    NSString *_fsrData;
    NSString *_tdmNamespace;
    NSString *_token;
    NSString *_transactionId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_anonymousId : 1; unsigned char read_fsrData : 1; unsigned char read_tdmNamespace : 1; unsigned char read_token : 1; unsigned char read_transactionId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTdmNamespace;
@property (retain, nonatomic) NSString *tdmNamespace;
@property (readonly, nonatomic) BOOL hasAnonymousId;
@property (retain, nonatomic) NSString *anonymousId;
@property (readonly, nonatomic) BOOL hasToken;
@property (retain, nonatomic) NSString *token;
@property (readonly, nonatomic) BOOL hasFsrData;
@property (retain, nonatomic) NSString *fsrData;
@property (readonly, nonatomic) BOOL hasTransactionId;
@property (retain, nonatomic) NSString *transactionId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

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

@end
