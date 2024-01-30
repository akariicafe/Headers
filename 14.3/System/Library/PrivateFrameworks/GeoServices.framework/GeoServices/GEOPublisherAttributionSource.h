@class NSString, NSMutableArray, PBDataReader;

@interface GEOPublisherAttributionSource : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_appAdamID;
    NSMutableArray *_localizedAttributions;
    NSString *_websiteURL;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_appAdamID : 1; unsigned char read_localizedAttributions : 1; unsigned char read_websiteURL : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *localizedAttributions;
@property (readonly, nonatomic) BOOL hasAppAdamID;
@property (retain, nonatomic) NSString *appAdamID;
@property (readonly, nonatomic) BOOL hasWebsiteURL;
@property (retain, nonatomic) NSString *websiteURL;

+ (Class)localizedAttributionType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)localizedAttributionAtIndex:(unsigned long long)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)clearLocalizedAttributions;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (void)addLocalizedAttribution:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)localizedAttributionsCount;

@end
