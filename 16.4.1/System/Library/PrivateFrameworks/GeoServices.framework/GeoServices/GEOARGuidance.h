@class PBDataReader, NSString, GEOFormattedString, NSMutableArray, PBUnknownFields;

@interface GEOARGuidance : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_arrowLabel;
    NSMutableArray *_gapRanges;
    GEOFormattedString *_instruction;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_arrowLabel : 1; unsigned char read_gapRanges : 1; unsigned char read_instruction : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasInstruction;
@property (retain, nonatomic) GEOFormattedString *instruction;
@property (readonly, nonatomic) BOOL hasArrowLabel;
@property (retain, nonatomic) NSString *arrowLabel;
@property (retain, nonatomic) NSMutableArray *gapRanges;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)gapRangeType;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (int)StringAsType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)typeAsString:(int)a0;
- (void)addGapRange:(id)a0;
- (void)clearGapRanges;
- (id)gapRangeAtIndex:(unsigned long long)a0;
- (unsigned long long)gapRangesCount;

@end
