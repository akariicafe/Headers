@class PBDataReader, GEOFormattedString, PBUnknownFields;

@interface GEOTransitExitPlanInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _selectedCarIndexs;
    GEOFormattedString *_label;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _numberOfCars;
    struct { unsigned char has_numberOfCars : 1; unsigned char read_unknownFields : 1; unsigned char read_selectedCarIndexs : 1; unsigned char read_label : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasNumberOfCars;
@property (nonatomic) unsigned int numberOfCars;
@property (readonly, nonatomic) unsigned long long selectedCarIndexsCount;
@property (readonly, nonatomic) unsigned int *selectedCarIndexs;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) GEOFormattedString *label;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (void)addSelectedCarIndex:(unsigned int)a0;
- (void)clearSelectedCarIndexs;
- (unsigned int)selectedCarIndexAtIndex:(unsigned long long)a0;
- (void)setSelectedCarIndexs:(unsigned int *)a0 count:(unsigned long long)a1;

@end
