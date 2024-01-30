@class NSString, NSMutableArray, PBDataReader;

@interface GEORPCurrentEnvironmentManifestURLs : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_environmentDisplayName;
    NSString *_environmentReleaseName;
    NSMutableArray *_urls;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_environmentDisplayName : 1; unsigned char read_environmentReleaseName : 1; unsigned char read_urls : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasEnvironmentDisplayName;
@property (retain, nonatomic) NSString *environmentDisplayName;
@property (readonly, nonatomic) BOOL hasEnvironmentReleaseName;
@property (retain, nonatomic) NSString *environmentReleaseName;
@property (retain, nonatomic) NSMutableArray *urls;

+ (Class)urlType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void)addUrl:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)urlsCount;
- (void)clearUrls;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)urlAtIndex:(unsigned long long)a0;
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
