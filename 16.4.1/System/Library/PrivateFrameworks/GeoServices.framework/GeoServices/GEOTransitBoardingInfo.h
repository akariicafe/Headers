@class PBDataReader, NSString, GEOTransitExitPlanInfo, GEOTransitListTimeInstruction, NSMutableArray, PBUnknownFields;

@interface GEOTransitBoardingInfo : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOTransitListTimeInstruction *_endTimeInstruction;
    NSMutableArray *_entrys;
    GEOTransitExitPlanInfo *_exitPlanInfo;
    GEOTransitListTimeInstruction *_preBoardingTimeInstruction;
    GEOTransitListTimeInstruction *_summaryTimeInstruction;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_endTimeInstruction : 1; unsigned char read_entrys : 1; unsigned char read_exitPlanInfo : 1; unsigned char read_preBoardingTimeInstruction : 1; unsigned char read_summaryTimeInstruction : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *entrys;
@property (readonly, nonatomic) BOOL hasExitPlanInfo;
@property (retain, nonatomic) GEOTransitExitPlanInfo *exitPlanInfo;
@property (readonly, nonatomic) BOOL hasSummaryTimeInstruction;
@property (retain, nonatomic) GEOTransitListTimeInstruction *summaryTimeInstruction;
@property (readonly, nonatomic) BOOL hasEndTimeInstruction;
@property (retain, nonatomic) GEOTransitListTimeInstruction *endTimeInstruction;
@property (readonly, nonatomic) BOOL hasPreBoardingTimeInstruction;
@property (retain, nonatomic) GEOTransitListTimeInstruction *preBoardingTimeInstruction;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)entryType;

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
- (void)writeTo:(id)a0;
- (id)init;
- (void)addEntry:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_transit_hasAnyFieldSet;
- (void)_transit_mergeFrom:(id)a0;
- (void)clearEntrys;
- (id)entryAtIndex:(unsigned long long)a0;
- (unsigned long long)entrysCount;

@end
