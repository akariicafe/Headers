@class NSTimeZone, NSArray, NSDate, GEOComposedTransitTripRouteStep;
@protocol GEOTransitSystem, GEOTransitLine;

@interface GEOComposedTransitTripRouteSegment : GEOComposedTransitBaseRouteSegment {
    unsigned long long _boardStepIndex;
    unsigned long long _alightStepIndex;
    unsigned long long _blockTransferStepIndex;
    unsigned long long _numberOfTransitStops;
    NSArray *_actionSheetDescriptions;
    NSArray *_routeDetailsOptionsArtwork;
    NSArray *_actionSheetOptionsArtwork;
    NSArray *_alightNotifications;
}

@property (readonly, nonatomic) id<GEOTransitSystem> transitSystem;
@property (readonly, nonatomic) id<GEOTransitLine> transitLine;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *boardStep;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *alightStep;
@property (readonly, nonatomic) NSTimeZone *departureTimeZone;
@property (readonly, nonatomic) NSDate *departureTime;
@property (readonly, nonatomic) NSArray *departureTimes;
@property (readonly, nonatomic) NSArray *transitLineOptions;
@property (readonly, nonatomic) double departureFrequencyMin;
@property (readonly, nonatomic) double departureFrequencyMax;
@property (readonly, nonatomic) NSDate *lastStepArrivalDate;
@property (readonly, nonatomic) NSArray *routeLineArtwork;
@property (readonly, nonatomic) unsigned long long rideOptionsCount;
@property (nonatomic) unsigned long long selectedRideOptionIndex;
@property (readonly, nonatomic) BOOL notifyBeforeAlightStep;

+ (BOOL)supportsSecureCoding;

- (id)initWithComposedRoute:(id)a0 rideSelections:(id)a1 sectionOptions:(id)a2 decoderData:(id)a3 tripIndex:(unsigned long long)a4 stepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 transitStepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a7;
- (BOOL)_needsStepData;
- (void)_cacheStepData;
- (id)blockTransferStep;
- (id)routeDetailsPrimaryArtworkForRideOption:(unsigned long long)a0;
- (id)actionSheetArtworkForRideOption:(unsigned long long)a0;
- (id)actionSheetDescriptionForRideOption:(unsigned long long)a0;
- (id)transitLineForRideOption:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)numberOfTransitStops;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
