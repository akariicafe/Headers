@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOSearchAttribution : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributionURLs;
    NSString *_sourceIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _sourceVersion;
    struct { unsigned char read_unknownFields : 1; unsigned char read_attributionURLs : 1; unsigned char read_sourceIdentifier : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSString *sourceIdentifier;
@property (nonatomic) unsigned int sourceVersion;
@property (retain, nonatomic) NSMutableArray *attributionURLs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)attributionURLsType;
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
- (void)addAttributionURLs:(id)a0;
- (unsigned long long)attributionURLsCount;
- (void)clearAttributionURLs;
- (id)attributionURLsAtIndex:(unsigned long long)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
