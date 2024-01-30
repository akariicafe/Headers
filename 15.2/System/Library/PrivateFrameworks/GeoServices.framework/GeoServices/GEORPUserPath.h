@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEORPUserPath : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _nativePaths;
    NSMutableArray *_webPaths;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_nativePaths : 1; unsigned char read_webPaths : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long nativePathsCount;
@property (readonly, nonatomic) int *nativePaths;
@property (retain, nonatomic) NSMutableArray *webPaths;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)webPathType;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)addWebPath:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)webPathsCount;
- (void)clearWebPaths;
- (void)addNativePath:(int)a0;
- (void)clearNativePaths;
- (int)nativePathAtIndex:(unsigned long long)a0;
- (id)webPathAtIndex:(unsigned long long)a0;
- (void)setNativePaths:(int *)a0 count:(unsigned long long)a1;
- (id)nativePathsAsString:(int)a0;
- (int)StringAsNativePaths:(id)a0;

@end
