@class PBUnknownFields, PBDataReader, GEOTransitListTimeInstruction, GEOFormattedString, GEOTransitExitPlanInfo, GEOTransitOccupancyInfo;

@interface GEOTransitBoardingInfoEntry : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_alternativeText;
    GEOTransitListTimeInstruction *_alternativeTimeInstruction;
    GEOTransitExitPlanInfo *_exitPlanInfoOverride;
    GEOFormattedString *_mainText;
    GEOTransitListTimeInstruction *_mainTimeInstruction;
    GEOTransitOccupancyInfo *_occupancyInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _expectedDepartureTime;
    BOOL _clearExitPlanInfo;
    struct { unsigned char has_expectedDepartureTime : 1; unsigned char has_clearExitPlanInfo : 1; unsigned char read_unknownFields : 1; unsigned char read_alternativeText : 1; unsigned char read_alternativeTimeInstruction : 1; unsigned char read_exitPlanInfoOverride : 1; unsigned char read_mainText : 1; unsigned char read_mainTimeInstruction : 1; unsigned char read_occupancyInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasExpectedDepartureTime;
@property (nonatomic) unsigned int expectedDepartureTime;
@property (readonly, nonatomic) BOOL hasMainText;
@property (retain, nonatomic) GEOFormattedString *mainText;
@property (readonly, nonatomic) BOOL hasAlternativeText;
@property (retain, nonatomic) GEOFormattedString *alternativeText;
@property (readonly, nonatomic) BOOL hasMainTimeInstruction;
@property (retain, nonatomic) GEOTransitListTimeInstruction *mainTimeInstruction;
@property (readonly, nonatomic) BOOL hasAlternativeTimeInstruction;
@property (retain, nonatomic) GEOTransitListTimeInstruction *alternativeTimeInstruction;
@property (readonly, nonatomic) BOOL hasOccupancyInfo;
@property (retain, nonatomic) GEOTransitOccupancyInfo *occupancyInfo;
@property (readonly, nonatomic) BOOL hasExitPlanInfoOverride;
@property (retain, nonatomic) GEOTransitExitPlanInfo *exitPlanInfoOverride;
@property (nonatomic) BOOL hasClearExitPlanInfo;
@property (nonatomic) BOOL clearExitPlanInfo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
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
