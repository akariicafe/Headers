@class PBDataReader, GEOLPRLicensePlateStructure, NSMutableArray;

@interface GEOLPRLPRMapRule : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _plateTypeIndexes;
    GEOLPRLicensePlateStructure *_mrLicensePlateStructure;
    NSMutableArray *_targetChars;
    NSMutableArray *_valueMappings;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_plateTypeIndexes : 1; unsigned char read_mrLicensePlateStructure : 1; unsigned char read_targetChars : 1; unsigned char read_valueMappings : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMrLicensePlateStructure;
@property (retain, nonatomic) GEOLPRLicensePlateStructure *mrLicensePlateStructure;
@property (readonly, nonatomic) unsigned long long plateTypeIndexesCount;
@property (readonly, nonatomic) unsigned int *plateTypeIndexes;
@property (retain, nonatomic) NSMutableArray *targetChars;
@property (retain, nonatomic) NSMutableArray *valueMappings;

+ (BOOL)isValid:(id)a0;
+ (Class)targetCharType;
+ (Class)valueMappingType;

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
- (void).cxx_destruct;
- (void)addPlateTypeIndexes:(unsigned int)a0;
- (void)addTargetChar:(id)a0;
- (void)addValueMapping:(id)a0;
- (void)clearPlateTypeIndexes;
- (void)clearTargetChars;
- (void)clearValueMappings;
- (unsigned int)plateTypeIndexesAtIndex:(unsigned long long)a0;
- (void)setPlateTypeIndexes:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)targetCharAtIndex:(unsigned long long)a0;
- (unsigned long long)targetCharsCount;
- (id)valueMappingAtIndex:(unsigned long long)a0;
- (unsigned long long)valueMappingsCount;

@end
