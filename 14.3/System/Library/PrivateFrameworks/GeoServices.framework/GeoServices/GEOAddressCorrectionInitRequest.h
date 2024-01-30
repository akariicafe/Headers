@class NSString, PBDataReader;

@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    NSString *_personID;
    NSString *_token;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _supportsMultipleAddresses;
    struct { unsigned char has_supportsMultipleAddresses : 1; unsigned char read_personID : 1; unsigned char read_token : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasToken;
@property (retain, nonatomic) NSString *token;
@property (readonly, nonatomic) BOOL hasPersonID;
@property (retain, nonatomic) NSString *personID;
@property (nonatomic) BOOL hasSupportsMultipleAddresses;
@property (nonatomic) BOOL supportsMultipleAddresses;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (Class)responseClass;
- (id)init;
- (unsigned int)requestTypeCode;
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
- (id)initWithDictionary:(id)a0;

@end
