@class GEORelatedPlaceModuleConfiguration, GEORelatedPlaceList;

@interface MURelatedPlaceSectionControllerConfiguration : NSObject

@property (retain, nonatomic) GEORelatedPlaceModuleConfiguration *moduleConfiguration;
@property (readonly, nonatomic) GEORelatedPlaceList *relatedPlaceList;
@property (nonatomic) BOOL suppressSeeAllButton;
@property (readonly, nonatomic) unsigned long long numInlineItems;
@property (nonatomic) BOOL suppressItemSelection;

- (void).cxx_destruct;
- (id)initWithRelatedPlaceList:(id)a0;

@end
