@class PBDataReader, NSString, GEOPDMapsIdentifier, NSMutableArray, PBUnknownFields;

@interface GEOPDTransitInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_labels;
    NSMutableArray *_lines;
    NSString *_searchDisplayName;
    NSMutableArray *_stopInfos;
    NSString *_subTitle;
    NSMutableArray *_systems;
    NSString *_title;
    NSMutableArray *_transitConnections;
    unsigned long long _transitId;
    GEOPDMapsIdentifier *_transitMarketId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_transitId : 1; unsigned char read_unknownFields : 1; unsigned char read_labels : 1; unsigned char read_lines : 1; unsigned char read_searchDisplayName : 1; unsigned char read_stopInfos : 1; unsigned char read_subTitle : 1; unsigned char read_systems : 1; unsigned char read_title : 1; unsigned char read_transitConnections : 1; unsigned char read_transitMarketId : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)transitInfoForPlaceData:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
