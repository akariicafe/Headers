@class NSString, NSMutableArray, PBDataReader;

@interface GEOSearchAttributionManifest : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_actionComponentMapEntries;
    NSMutableArray *_searchAttributionSources;
    NSString *_sourceURL;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_timestamp : 1; unsigned char read_actionComponentMapEntries : 1; unsigned char read_searchAttributionSources : 1; unsigned char read_sourceURL : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (retain, nonatomic) NSMutableArray *searchAttributionSources;
@property (retain, nonatomic) NSMutableArray *actionComponentMapEntries;

+ (Class)searchAttributionSourcesType;
+ (Class)actionComponentMapEntriesType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)clearActionComponentMapEntries;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (id)searchAttributionSourcesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)actionComponentMapEntriesAtIndex:(unsigned long long)a0;
- (id)description;
- (unsigned long long)actionComponentMapEntriesCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)searchAttributionSourcesCount;
- (id)initWithDictionary:(id)a0;
- (void)addActionComponentMapEntries:(id)a0;
- (void)addSearchAttributionSources:(id)a0;
- (void)clearSearchAttributionSources;

@end
