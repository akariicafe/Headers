@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOTransitTicketingSegment : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_paths;
    NSString *_segmentName;
    NSString *_ticketingUrl;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_paths : 1; unsigned char read_segmentName : 1; unsigned char read_ticketingUrl : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTicketingUrl;
@property (retain, nonatomic) NSString *ticketingUrl;
@property (readonly, nonatomic) BOOL hasSegmentName;
@property (retain, nonatomic) NSString *segmentName;
@property (retain, nonatomic) NSMutableArray *paths;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)pathType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)pathAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (void)clearPaths;
- (BOOL)readFrom:(id)a0;
- (void)addPath:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)pathsCount;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
