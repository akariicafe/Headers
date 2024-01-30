@class NSArray, GEOMapItemParentVenue, NSString;
@protocol GEOVenueIdentifier, GEOMapItemVenueContents;

@interface GEOMapItemVenueInfo : NSObject <GEOMapItemVenueInfo>

@property (readonly, nonatomic) id<GEOVenueIdentifier> venueIdentifier;
@property (readonly, nonatomic) int venueFeatureType;
@property (readonly, nonatomic) NSArray *filters;
@property (readonly, nonatomic) GEOMapItemParentVenue *parent;
@property (readonly, nonatomic) id<GEOMapItemVenueContents> contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_filtersFromVenueInfo:(id)a0;
- (id)initWithIdentifier:(id)a0 featureType:(int)a1 filters:(id)a2 parent:(id)a3 contents:(id)a4;
- (id)initWithVenueInfo:(id)a0;

@end
