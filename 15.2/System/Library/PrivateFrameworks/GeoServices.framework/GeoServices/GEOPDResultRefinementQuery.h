@class PBDataReader, GEOPDRefinementSessionState, NSMutableArray, PBUnknownFields;

@interface GEOPDResultRefinementQuery : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_refinementSections;
    GEOPDRefinementSessionState *_refinementSessionState;
    NSMutableArray *_refinements;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _resultRefinementOriginType;
    struct { unsigned char has_resultRefinementOriginType : 1; unsigned char read_unknownFields : 1; unsigned char read_refinementSections : 1; unsigned char read_refinementSessionState : 1; unsigned char read_refinements : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *refinements;
@property (readonly, nonatomic) BOOL hasRefinementSessionState;
@property (retain, nonatomic) GEOPDRefinementSessionState *refinementSessionState;
@property (retain, nonatomic) NSMutableArray *refinementSections;
@property (nonatomic) BOOL hasResultRefinementOriginType;
@property (nonatomic) int resultRefinementOriginType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)refinementType;
+ (Class)refinementSectionType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (void)addRefinement:(id)a0;
- (void)addRefinementSection:(id)a0;
- (unsigned long long)refinementsCount;
- (void)clearRefinements;
- (id)refinementAtIndex:(unsigned long long)a0;
- (unsigned long long)refinementSectionsCount;
- (void)clearRefinementSections;
- (id)refinementSectionAtIndex:(unsigned long long)a0;
- (id)resultRefinementOriginTypeAsString:(int)a0;
- (int)StringAsResultRefinementOriginType:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
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
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
