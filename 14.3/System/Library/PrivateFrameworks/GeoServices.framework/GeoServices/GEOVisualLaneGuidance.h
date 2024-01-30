@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOVisualLaneGuidance : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_instructions;
    NSMutableArray *_laneInfos;
    NSMutableArray *_titles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_instructions : 1; unsigned char read_laneInfos : 1; unsigned char read_titles : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *laneInfos;
@property (retain, nonatomic) NSMutableArray *instructions;
@property (retain, nonatomic) NSMutableArray *titles;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)laneInfoType;
+ (Class)instructionType;
+ (Class)titleType;
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
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)addTitle:(id)a0;
- (void)addLaneInfo:(id)a0;
- (id)titleAtIndex:(unsigned long long)a0;
- (void)addInstruction:(id)a0;
- (unsigned long long)laneInfosCount;
- (void)clearLaneInfos;
- (id)laneInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)instructionsCount;
- (void)clearInstructions;
- (id)instructionAtIndex:(unsigned long long)a0;
- (unsigned long long)titlesCount;
- (void)clearTitles;
- (id)initWithDictionary:(id)a0;

@end
