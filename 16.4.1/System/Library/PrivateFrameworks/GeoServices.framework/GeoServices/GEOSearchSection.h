@class NSString, GEOSearchSectionPlace, GEOSearchSectionGuide;

@interface GEOSearchSection : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long sectionType;
@property (readonly, nonatomic) GEOSearchSectionGuide *sectionGuide;
@property (readonly, nonatomic) GEOSearchSectionPlace *sectionPlace;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 sectionType:(long long)a1 sectionGuide:(id)a2 sectionPlace:(id)a3;
- (id)initWithSearchSection:(id)a0 mapsResults:(id)a1;

@end
