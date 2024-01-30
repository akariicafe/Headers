@class NSString, PBDataReader;

@interface GEORPUserCredentials : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_icloudUserMapsAuthToken;
    NSString *_icloudUserPersonId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_icloudUserMapsAuthToken : 1; unsigned char read_icloudUserPersonId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasIcloudUserPersonId;
@property (retain, nonatomic) NSString *icloudUserPersonId;
@property (readonly, nonatomic) BOOL hasIcloudUserMapsAuthToken;
@property (retain, nonatomic) NSString *icloudUserMapsAuthToken;

+ (BOOL)isValid:(id)a0;
+ (id)_credentialsForPrimaryICloudAccount;

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
- (void).cxx_destruct;

@end
