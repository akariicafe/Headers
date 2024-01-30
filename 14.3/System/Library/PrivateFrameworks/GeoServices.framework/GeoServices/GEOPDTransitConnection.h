@class PBDataReader, NSString, GEOPDMapsIdentifier, NSMutableArray, PBUnknownFields;

@interface GEOPDTransitConnection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_entityNameString;
    GEOPDMapsIdentifier *_mapsId;
    unsigned long long _muid;
    NSMutableArray *_transitLabels;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_muid : 1; unsigned char read_unknownFields : 1; unsigned char read_entityNameString : 1; unsigned char read_mapsId : 1; unsigned char read_transitLabels : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (retain, nonatomic) NSMutableArray *transitLabels;
@property (readonly, nonatomic) BOOL hasEntityNameString;
@property (retain, nonatomic) NSString *entityNameString;
@property (readonly, nonatomic) BOOL hasMapsId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)transitLabelType;
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
- (id)description;
- (void)addTransitLabel:(id)a0;
- (unsigned long long)transitLabelsCount;
- (void)clearTransitLabels;
- (id)transitLabelAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
