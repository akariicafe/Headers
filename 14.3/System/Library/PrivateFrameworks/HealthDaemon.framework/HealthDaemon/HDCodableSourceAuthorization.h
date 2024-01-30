@class NSData, NSMutableArray, HDCodableSource;

@interface HDCodableSourceAuthorization : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSourceUUID;
@property (retain, nonatomic) NSData *sourceUUID;
@property (retain, nonatomic) NSMutableArray *authorizations;
@property (readonly, nonatomic) BOOL hasBackupUUID;
@property (retain, nonatomic) NSData *backupUUID;
@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) HDCodableSource *source;

+ (Class)authorizationsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addAuthorizations:(id)a0;
- (unsigned long long)authorizationsCount;
- (void)clearAuthorizations;
- (id)authorizationsAtIndex:(unsigned long long)a0;
- (id)decodedSourceUUID;
- (id)decodedBackupUUID;

@end
