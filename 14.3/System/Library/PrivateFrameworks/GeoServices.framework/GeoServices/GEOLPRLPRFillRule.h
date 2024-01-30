@class PBDataReader, GEOLPRLicensePlateStructure, GEOLPRTargetChar;

@interface GEOLPRLPRFillRule : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _plateTypeIndexes;
    GEOLPRLicensePlateStructure *_frLicensePlateStructure;
    GEOLPRTargetChar *_fromChar;
    GEOLPRTargetChar *_toChar;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _fillType;
    struct { unsigned char has_fillType : 1; unsigned char read_plateTypeIndexes : 1; unsigned char read_frLicensePlateStructure : 1; unsigned char read_fromChar : 1; unsigned char read_toChar : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasFrLicensePlateStructure;
@property (retain, nonatomic) GEOLPRLicensePlateStructure *frLicensePlateStructure;
@property (readonly, nonatomic) unsigned long long plateTypeIndexesCount;
@property (readonly, nonatomic) unsigned int *plateTypeIndexes;
@property (readonly, nonatomic) BOOL hasFromChar;
@property (retain, nonatomic) GEOLPRTargetChar *fromChar;
@property (readonly, nonatomic) BOOL hasToChar;
@property (retain, nonatomic) GEOLPRTargetChar *toChar;
@property (nonatomic) BOOL hasFillType;
@property (nonatomic) int fillType;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (void)addPlateTypeIndexes:(unsigned int)a0;
- (void)clearPlateTypeIndexes;
- (unsigned int)plateTypeIndexesAtIndex:(unsigned long long)a0;
- (void)setPlateTypeIndexes:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)fillTypeAsString:(int)a0;
- (int)StringAsFillType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
