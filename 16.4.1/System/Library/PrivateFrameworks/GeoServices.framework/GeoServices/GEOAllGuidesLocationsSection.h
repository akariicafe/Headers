@class NSString, NSArray, NSDictionary, GEOPDAllGuidesLocationsSection, GEOPDPlace;

@interface GEOAllGuidesLocationsSection : NSObject {
    GEOPDAllGuidesLocationsSection *_section;
    NSArray *_mapsResults;
    GEOPDPlace *_place;
    NSDictionary *_entriesDictionary;
}

@property (readonly, nonatomic) NSString *sectionTitle;
@property (readonly, nonatomic) NSArray *guideLocations;
@property (readonly, nonatomic) NSArray *guideLocationIdentifiers;
@property (readonly, nonatomic) NSDictionary *pdGuideLocationEntries;
@property (readonly, nonatomic) BOOL isWorldwideSection;

- (void).cxx_destruct;
- (id)initWithAllGuidesLocationSection:(id)a0 mapsResults:(id)a1;
- (id)placeResultForSection:(id)a0 mapsResults:(id)a1;

@end
