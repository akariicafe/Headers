@class NSArray;

@interface GEOSearchSectionList : NSObject

@property (readonly, nonatomic) NSArray *searchSections;
@property (readonly, nonatomic) NSArray *geoMapItemIdentifiers;

+ (id)identifiersWithSearchSections:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)indexOfItemWithIdentifier:(id)a0;
- (id)initWithSearchSectionList:(id)a0 mapsResults:(id)a1;
- (id)initWithSearchSections:(id)a0;

@end
