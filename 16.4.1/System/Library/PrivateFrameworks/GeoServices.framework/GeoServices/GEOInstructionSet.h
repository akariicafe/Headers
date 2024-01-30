@class NSString, GEOFormattedString, GEODrivingWalkingInstruction, GEODrivingWalkingSpokenInstruction, PBDataReader, PBUnknownFields, GEOTransitListInstruction, GEOTransitSignInstruction, GEOGenericInstruction;
@protocol GEOServerFormattedString;

@interface GEOInstructionSet : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_countStopsText;
    GEOFormattedString *_departureBar;
    GEODrivingWalkingInstruction *_drivingWalkingListInstruction;
    GEODrivingWalkingInstruction *_drivingWalkingSignInstruction;
    GEODrivingWalkingSpokenInstruction *_drivingWalkingSpokenInstruction;
    GEOGenericInstruction *_genericInstruction;
    GEOTransitListInstruction *_transitListInstruction;
    GEOTransitSignInstruction *_transitSignInstruction;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _departureBarStyle;
    struct { unsigned char has_departureBarStyle : 1; unsigned char read_unknownFields : 1; unsigned char read_countStopsText : 1; unsigned char read_departureBar : 1; unsigned char read_drivingWalkingListInstruction : 1; unsigned char read_drivingWalkingSignInstruction : 1; unsigned char read_drivingWalkingSpokenInstruction : 1; unsigned char read_genericInstruction : 1; unsigned char read_transitListInstruction : 1; unsigned char read_transitSignInstruction : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<GEOServerFormattedString> departureBarFormattedString;
@property (readonly, nonatomic) long long departureBarFormatStyle;
@property (readonly, nonatomic) id<GEOServerFormattedString> countStopsFormattedString;
@property (readonly, nonatomic) id<GEOServerFormattedString> expandableListFormattedString;
@property (readonly, nonatomic) id<GEOServerFormattedString> primaryTimeFormattedString;
@property (readonly, nonatomic) id<GEOServerFormattedString> secondaryTimeFormattedString;
@property (readonly, nonatomic) BOOL hideTimeInstructionsIfCollapsed;
@property (readonly, nonatomic) BOOL hasTransitSignInstruction;
@property (retain, nonatomic) GEOTransitSignInstruction *transitSignInstruction;
@property (readonly, nonatomic) BOOL hasTransitListInstruction;
@property (retain, nonatomic) GEOTransitListInstruction *transitListInstruction;
@property (readonly, nonatomic) BOOL hasGenericInstruction;
@property (retain, nonatomic) GEOGenericInstruction *genericInstruction;
@property (readonly, nonatomic) BOOL hasDepartureBar;
@property (retain, nonatomic) GEOFormattedString *departureBar;
@property (nonatomic) BOOL hasDepartureBarStyle;
@property (nonatomic) int departureBarStyle;
@property (readonly, nonatomic) BOOL hasCountStopsText;
@property (retain, nonatomic) GEOFormattedString *countStopsText;
@property (readonly, nonatomic) BOOL hasDrivingWalkingSignInstruction;
@property (retain, nonatomic) GEODrivingWalkingInstruction *drivingWalkingSignInstruction;
@property (readonly, nonatomic) BOOL hasDrivingWalkingListInstruction;
@property (retain, nonatomic) GEODrivingWalkingInstruction *drivingWalkingListInstruction;
@property (readonly, nonatomic) BOOL hasDrivingWalkingSpokenInstruction;
@property (retain, nonatomic) GEODrivingWalkingSpokenInstruction *drivingWalkingSpokenInstruction;
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
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (int)StringAsDepartureBarStyle:(id)a0;
- (BOOL)_transit_hasAnyFieldSet;
- (void)_transit_mergeFrom:(id)a0;
- (id)departureBarStyleAsString:(int)a0;

@end
