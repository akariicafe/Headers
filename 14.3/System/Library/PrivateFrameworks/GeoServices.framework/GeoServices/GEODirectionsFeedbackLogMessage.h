@class PBDataReader, NSMutableArray, GEOLocation;

@interface GEODirectionsFeedbackLogMessage : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct GEONavigationAudioFeedback { BOOL _bTHFPAvailableAtEndOfNav; BOOL _bTHFPRoutesAvailable; BOOL _currentRouteHFPEnabledAtEndOfNav; int _currentRouteTypeAtEndOfNav; BOOL _everManuallyChangedRoute; BOOL _everManuallyEnabledHFPRoute; BOOL _everViewedAudioSheet; BOOL _everViewedAudioSheetBTAny; BOOL _everViewedAudioSheetBTHFP; unsigned int _manuallyChangedRouteCount; unsigned int _manuallyDisabledHFPCount; unsigned int _manuallyEnabledHFPCount; BOOL _pauseSpokenAudioEnabled; unsigned int _spokenPromptsCount; BOOL _viewedAudioSheet; BOOL _viewedAudioSheetBTAny; BOOL _viewedAudioSheetBTHFP; BOOL _wirelessRoutesAvailable; struct { unsigned char bTHFPAvailableAtEndOfNav : 1; unsigned char bTHFPRoutesAvailable : 1; unsigned char currentRouteHFPEnabledAtEndOfNav : 1; unsigned char currentRouteTypeAtEndOfNav : 1; unsigned char everManuallyChangedRoute : 1; unsigned char everManuallyEnabledHFPRoute : 1; unsigned char everViewedAudioSheet : 1; unsigned char everViewedAudioSheetBTAny : 1; unsigned char everViewedAudioSheetBTHFP : 1; unsigned char manuallyChangedRouteCount : 1; unsigned char manuallyDisabledHFPCount : 1; unsigned char manuallyEnabledHFPCount : 1; unsigned char pauseSpokenAudioEnabled : 1; unsigned char spokenPromptsCount : 1; unsigned char viewedAudioSheet : 1; unsigned char viewedAudioSheetBTAny : 1; unsigned char viewedAudioSheetBTHFP : 1; unsigned char wirelessRoutesAvailable : 1; } _has; } _navigationAudioFeedback;
    NSMutableArray *_directionsFeedbacks;
    double _durationOfTrip;
    GEOLocation *_finalLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _arrivedAtDestination;
    struct { unsigned char has_navigationAudioFeedback : 1; unsigned char has_durationOfTrip : 1; unsigned char has_arrivedAtDestination : 1; unsigned char read_directionsFeedbacks : 1; unsigned char read_finalLocation : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *directionsFeedbacks;
@property (readonly, nonatomic) BOOL hasFinalLocation;
@property (retain, nonatomic) GEOLocation *finalLocation;
@property (nonatomic) BOOL hasArrivedAtDestination;
@property (nonatomic) BOOL arrivedAtDestination;
@property (nonatomic) BOOL hasNavigationAudioFeedback;
@property (nonatomic) struct GEONavigationAudioFeedback { BOOL x0; BOOL x1; BOOL x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned int x11; BOOL x12; unsigned int x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; } x18; } navigationAudioFeedback;
@property (nonatomic) BOOL hasDurationOfTrip;
@property (nonatomic) double durationOfTrip;

+ (Class)directionsFeedbackType;
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
- (id)initWithDictionary:(id)a0;
- (void)addDirectionsFeedback:(id)a0;
- (unsigned long long)directionsFeedbacksCount;
- (void)clearDirectionsFeedbacks;
- (id)directionsFeedbackAtIndex:(unsigned long long)a0;

@end
