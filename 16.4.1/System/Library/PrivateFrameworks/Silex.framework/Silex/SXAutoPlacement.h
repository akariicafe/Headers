@class NSString;
@protocol SXSuggestedArticlesPlacementType, SXAdvertisementPlacementType;

@interface SXAutoPlacement : SXJSONObject <SXAutoPlacement>

@property (readonly, nonatomic) id<SXAdvertisementPlacementType> advertisement;
@property (readonly, nonatomic) id<SXSuggestedArticlesPlacementType> suggestedArticles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classForProtocolProperty:(id)a0 withValue:(id)a1;


@end
