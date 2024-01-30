@class GEOInstructionSet, GEOTransitBoardingInfo, PBUnknownFields, NSData, PBDataReader, GEOTransitVehiclePositionInfo, GEOTransitScheduleInfo;

@interface GEOTransitStepUpdate : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOTransitBoardingInfo *_boardingInfo;
    GEOInstructionSet *_instructions;
    GEOTransitScheduleInfo *_scheduleInfo;
    NSData *_updateIdentifier;
    GEOTransitVehiclePositionInfo *_vehiclePositionInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_boardingInfo : 1; unsigned char read_instructions : 1; unsigned char read_scheduleInfo : 1; unsigned char read_updateIdentifier : 1; unsigned char read_vehiclePositionInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasUpdateIdentifier;
@property (retain, nonatomic) NSData *updateIdentifier;
@property (readonly, nonatomic) BOOL hasInstructions;
@property (retain, nonatomic) GEOInstructionSet *instructions;
@property (readonly, nonatomic) BOOL hasVehiclePositionInfo;
@property (retain, nonatomic) GEOTransitVehiclePositionInfo *vehiclePositionInfo;
@property (readonly, nonatomic) BOOL hasScheduleInfo;
@property (retain, nonatomic) GEOTransitScheduleInfo *scheduleInfo;
@property (readonly, nonatomic) BOOL hasBoardingInfo;
@property (retain, nonatomic) GEOTransitBoardingInfo *boardingInfo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

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

@end
