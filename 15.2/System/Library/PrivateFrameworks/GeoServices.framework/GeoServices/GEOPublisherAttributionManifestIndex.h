@class PBDataReader, NSMutableArray, NSMutableDictionary;

@interface GEOPublisherAttributionManifestIndex : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_publisherAttributionFiles;
    NSMutableDictionary *_publisherToFileIndex;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_publisherAttributionFiles : 1; unsigned char read_publisherToFileIndex : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *publisherAttributionFiles;
@property (retain, nonatomic) NSMutableDictionary *publisherToFileIndex;

+ (Class)publisherAttributionFilesType;
+ (Class)publisherToFileIndexType;
+ (BOOL)isValid:(id)a0;

- (void)addPublisherAttributionFiles:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)publisherToFileIndexCount;
- (void)setPublisherToFileIndexValue:(unsigned int)a0 forKey:(id)a1;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)publisherAttributionFilesAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)clearPublisherAttributionFiles;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)publisherAttributionFilesCount;
- (void)enumeratePublisherToFileIndexUsingBlock:(id /* block */)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (unsigned int)publisherToFileIndexForKey:(id)a0;
- (void)clearPublisherToFileIndex;
- (id)dictionaryRepresentation;

@end
