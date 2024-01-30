@class GEOGuidesHomeFixedSection, NSArray, GEOPDGuidesHomeResult;

@interface GEOGuidesHomeResult : NSObject {
    GEOPDGuidesHomeResult *_pdGuideHomeResult;
    NSArray *_mapsResults;
}

@property (readonly, nonatomic) GEOGuidesHomeFixedSection *featuredGuidesSection;
@property (readonly, nonatomic) GEOGuidesHomeFixedSection *filtersSection;
@property (readonly, nonatomic) GEOGuidesHomeFixedSection *filteredGuidesSection;
@property (readonly, nonatomic) NSArray *repeatableSections;

- (void).cxx_destruct;
- (id)guideLocationName:(id)a0;
- (id)initWithGuidesHomeFixedSection:(id)a0 mapsResults:(id)a1;

@end
