@class PBDataReader, NSString, GEOPDMapsIdentifier, NSMutableArray, PBUnknownFields;

@interface GEOPDTransitInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_labels;
    NSMutableArray *_lines;
    NSString *_searchDisplayName;
    NSString *_subTitle;
    NSMutableArray *_systems;
    NSString *_title;
    NSMutableArray *_transitConnections;
    unsigned long long _transitId;
    GEOPDMapsIdentifier *_transitMarketId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_transitId : 1; unsigned char read_unknownFields : 1; unsigned char read_labels : 1; unsigned char read_lines : 1; unsigned char read_searchDisplayName : 1; unsigned char read_subTitle : 1; unsigned char read_systems : 1; unsigned char read_title : 1; unsigned char read_transitConnections : 1; unsigned char read_transitMarketId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *lines;
@property (retain, nonatomic) NSMutableArray *systems;
@property (retain, nonatomic) NSMutableArray *labels;
@property (retain, nonatomic) NSMutableArray *transitConnections;
@property (readonly, nonatomic) BOOL hasSearchDisplayName;
@property (retain, nonatomic) NSString *searchDisplayName;
@property (readonly, nonatomic) BOOL hasTransitMarketId;
@property (retain, nonatomic) GEOPDMapsIdentifier *transitMarketId;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSubTitle;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL hasTransitId;
@property (nonatomic) unsigned long long transitId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)systemType;
+ (Class)lineType;
+ (Class)labelType;
+ (id)transitInfoForPlaceData:(id)a0;
+ (Class)transitConnectionType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)lineAtIndex:(unsigned long long)a0;
- (unsigned long long)systemsCount;
- (void)clearSystems;
- (id)systemAtIndex:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (id)labelAtIndex:(unsigned long long)a0;
- (void)addLine:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addTransitConnection:(id)a0;
- (unsigned long long)transitConnectionsCount;
- (void)clearTransitConnections;
- (id)transitConnectionAtIndex:(unsigned long long)a0;
- (unsigned long long)linesCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)addLabel:(id)a0;
- (void)clearLabels;
- (void)addSystem:(id)a0;
- (void)clearLines;
- (unsigned long long)labelsCount;

@end
