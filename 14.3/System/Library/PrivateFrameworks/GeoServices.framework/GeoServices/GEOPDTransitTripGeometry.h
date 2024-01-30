@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDTransitTripGeometry : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _tripStepIndexs;
    NSMutableArray *_tripLinks;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_tripStepIndexs : 1; unsigned char read_tripLinks : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *tripLinks;
@property (readonly, nonatomic) unsigned long long tripStepIndexsCount;
@property (readonly, nonatomic) unsigned int *tripStepIndexs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)tripLinkType;
+ (id)transitTripGeometryForPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addTripLink:(id)a0;
- (void)addTripStepIndex:(unsigned int)a0;
- (unsigned long long)tripLinksCount;
- (void)clearTripLinks;
- (id)tripLinkAtIndex:(unsigned long long)a0;
- (void)clearTripStepIndexs;
- (unsigned int)tripStepIndexAtIndex:(unsigned long long)a0;
- (void)setTripStepIndexs:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
