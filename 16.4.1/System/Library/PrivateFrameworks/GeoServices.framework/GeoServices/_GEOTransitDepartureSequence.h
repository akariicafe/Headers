@class NSTimeZone, NSArray, NSString, NSSet, GEOPDDepartureSequence, GEOPDStopInfo, GEOPDDepartureSequenceContainer;
@protocol GEOTransitLine;

@interface _GEOTransitDepartureSequence : NSObject <GEOTransitDepartureSequence> {
    GEOPDDepartureSequence *_sequence;
    id<GEOTransitLine> _line;
    NSSet *_nextStopIDs;
    long long _displayStyle;
    GEOPDStopInfo *_stopInfo;
    GEOPDDepartureSequenceContainer *_container;
}

@property (readonly, nonatomic) NSArray *departures;
@property (readonly, nonatomic) NSArray *frequencies;
@property (readonly, nonatomic) unsigned long long transitId;
@property (readonly, nonatomic) id<GEOTransitLine> line;
@property (readonly, nonatomic) BOOL isLowFrequency;
@property (readonly, nonatomic) long long displayStyle;
@property (readonly, nonatomic) NSString *direction;
@property (readonly, nonatomic) NSString *headsign;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *originName;
@property (readonly, nonatomic) NSString *containerDisplayName;
@property (readonly, nonatomic) NSArray *containerLabelItems;
@property (readonly, nonatomic) NSArray *operatingHours;
@property (readonly, nonatomic) NSSet *nextStopIDs;
@property (readonly, nonatomic) BOOL hasWalkingETA;
@property (readonly, nonatomic) unsigned long long walkingETA;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_enumerateDeparturesValidForDate:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)areOperatingHours:(id)a0 activeForDate:(id)a1;
- (id)departuresValidForDate:(id)a0;
- (id)firstDepartureAfterDate:(id)a0;
- (id)firstDepartureFrequencyOnOrAfterDate:(id)a0;
- (id)firstDepartureOnOrAfterDate:(id)a0;
- (id)firstDepartureValidForDate:(id)a0;
- (id)firstOpenOperatingDateOnOrAfterDate:(id)a0;
- (double)frequencyForSortingAtDate:(id)a0;
- (id)frequencyToDescribeAtDate:(id)a0;
- (BOOL)hasFrequencyAtDate:(id)a0;
- (id)initWithSequence:(id)a0 line:(id)a1 pbLine:(id)a2 stopInfo:(id)a3 container:(id)a4;
- (BOOL)isDepartureDateInactive:(id)a0 withReferenceDate:(id)a1;
- (BOOL)isValidForDate:(id)a0 inTimeZone:(id)a1;
- (unsigned long long)numberOfDeparturesAfterDate:(id)a0;
- (id)operatingHoursForDate:(id)a0 inTimeZone:(id)a1;
- (id)serviceResumesAfterDate:(id)a0;
- (unsigned long long)stopId;

@end
