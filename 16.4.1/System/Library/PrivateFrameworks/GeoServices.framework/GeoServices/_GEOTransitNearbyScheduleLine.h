@class NSString, NSArray, GEOPDDepartureSequenceContainer;

@interface _GEOTransitNearbyScheduleLine : NSObject <GEOTransitNearbyScheduleCell> {
    GEOPDDepartureSequenceContainer *_departureSequenceContainer;
}

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL isSignificant;
@property (readonly, nonatomic) NSArray *artworks;
@property (readonly, nonatomic) NSArray *departureSequences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDepartureSequenceContainer:(id)a0 departureSequences:(id)a1;

@end
