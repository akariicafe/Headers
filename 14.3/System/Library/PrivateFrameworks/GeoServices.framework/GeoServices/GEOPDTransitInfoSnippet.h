@class PBUnknownFields, NSString, GEOTimezone, GEOLatLng, PBDataReader, NSMutableArray, GEOStyleAttributes;

@interface GEOPDTransitInfoSnippet : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_artworks;
    NSMutableArray *_labels;
    NSString *_searchDisplayName;
    GEOLatLng *_stopLocationForTrip;
    GEOStyleAttributes *_styleAttributesForTrip;
    NSMutableArray *_systemNames;
    GEOTimezone *_timezone;
    unsigned long long _transitId;
    NSString *_transitName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_transitId : 1; unsigned char read_unknownFields : 1; unsigned char read_artworks : 1; unsigned char read_labels : 1; unsigned char read_searchDisplayName : 1; unsigned char read_stopLocationForTrip : 1; unsigned char read_styleAttributesForTrip : 1; unsigned char read_systemNames : 1; unsigned char read_timezone : 1; unsigned char read_transitName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *systemNames;
@property (retain, nonatomic) NSMutableArray *artworks;
@property (readonly, nonatomic) BOOL hasSearchDisplayName;
@property (retain, nonatomic) NSString *searchDisplayName;
@property (retain, nonatomic) NSMutableArray *labels;
@property (nonatomic) BOOL hasTransitId;
@property (nonatomic) unsigned long long transitId;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (retain, nonatomic) GEOTimezone *timezone;
@property (readonly, nonatomic) BOOL hasTransitName;
@property (retain, nonatomic) NSString *transitName;
@property (readonly, nonatomic) BOOL hasStopLocationForTrip;
@property (retain, nonatomic) GEOLatLng *stopLocationForTrip;
@property (readonly, nonatomic) BOOL hasStyleAttributesForTrip;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributesForTrip;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)artworkType;
+ (Class)systemNameType;
+ (Class)labelType;
+ (id)transitInfoSnippetForPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)addArtwork:(id)a0;
- (unsigned long long)artworksCount;
- (void)clearArtworks;
- (id)artworkAtIndex:(unsigned long long)a0;
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
- (void)writeTo:(id)a0;
- (id)description;
- (void)addSystemName:(id)a0;
- (unsigned long long)systemNamesCount;
- (void)clearSystemNames;
- (id)systemNameAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)addLabel:(id)a0;
- (void)clearLabels;
- (unsigned long long)labelsCount;

@end
