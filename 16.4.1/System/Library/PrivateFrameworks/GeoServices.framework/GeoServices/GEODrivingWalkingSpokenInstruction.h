@class PBDataReader, GEOFormattedString, NSMutableArray, PBUnknownFields;

@interface GEODrivingWalkingSpokenInstruction : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_continueStage;
    NSMutableArray *_executionStages;
    GEOFormattedString *_initialStage;
    GEOFormattedString *_preparationStage;
    GEOFormattedString *_proceedStage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _shortChainedInstructionIndex;
    struct { unsigned char has_shortChainedInstructionIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_continueStage : 1; unsigned char read_executionStages : 1; unsigned char read_initialStage : 1; unsigned char read_preparationStage : 1; unsigned char read_proceedStage : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasProceedStage;
@property (retain, nonatomic) GEOFormattedString *proceedStage;
@property (readonly, nonatomic) BOOL hasContinueStage;
@property (retain, nonatomic) GEOFormattedString *continueStage;
@property (readonly, nonatomic) BOOL hasInitialStage;
@property (retain, nonatomic) GEOFormattedString *initialStage;
@property (readonly, nonatomic) BOOL hasPreparationStage;
@property (retain, nonatomic) GEOFormattedString *preparationStage;
@property (retain, nonatomic) NSMutableArray *executionStages;
@property (nonatomic) BOOL hasShortChainedInstructionIndex;
@property (nonatomic) unsigned int shortChainedInstructionIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)executionStageType;

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
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (void)addExecutionStage:(id)a0;
- (void)clearExecutionStages;
- (id)executionStageAtIndex:(unsigned long long)a0;
- (unsigned long long)executionStagesCount;

@end
