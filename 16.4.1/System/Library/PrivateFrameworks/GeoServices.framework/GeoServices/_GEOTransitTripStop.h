@class NSTimeZone, NSString, NSArray, GEOLatLng, GEOStyleAttributes;
@protocol GEOTransitDeparture;

@interface _GEOTransitTripStop : NSObject <GEOTransitTripStop> {
    NSTimeZone *_timeZone;
    unsigned long long _stationIdentifier;
    NSString *_transitName;
    NSArray *_labelItems;
    GEOLatLng *_location;
    GEOStyleAttributes *_styleAttributes;
}

@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSArray *labelItems;
@property (readonly, nonatomic) id<GEOTransitDeparture> departure;
@property (readonly, nonatomic) unsigned long long stationIdentifier;
@property (readonly, nonatomic) GEOLatLng *location;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transitTripStopsForPlaceData:(id)a0;

- (void).cxx_destruct;
- (id)initWithTransitSnippet:(id)a0 departureSequence:(id)a1;

@end
