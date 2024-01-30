@class PBDataReader, GEOLPRLicensePlateStructure, NSMutableArray;

@interface GEOLPRLPRPickupRule : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _plateTypeIndexes;
    NSMutableArray *_pickupChars;
    GEOLPRLicensePlateStructure *_prLicensePlateStructure;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_plateTypeIndexes : 1; unsigned char read_pickupChars : 1; unsigned char read_prLicensePlateStructure : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPrLicensePlateStructure;
@property (retain, nonatomic) GEOLPRLicensePlateStructure *prLicensePlateStructure;
@property (readonly, nonatomic) unsigned long long plateTypeIndexesCount;
@property (readonly, nonatomic) unsigned int *plateTypeIndexes;
@property (retain, nonatomic) NSMutableArray *pickupChars;

+ (Class)pickupCharType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addPlateTypeIndexes:(unsigned int)a0;
- (void)clearPlateTypeIndexes;
- (unsigned int)plateTypeIndexesAtIndex:(unsigned long long)a0;
- (void)setPlateTypeIndexes:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)addPickupChar:(id)a0;
- (unsigned long long)pickupCharsCount;
- (void)clearPickupChars;
- (id)pickupCharAtIndex:(unsigned long long)a0;
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
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
