@class NSDictionary, NSString;

@interface NTCostAwareLimitTransformation : NSObject <NTFeedTransforming>

@property (readonly, nonatomic) double budget;
@property (readonly, copy, nonatomic) id /* block */ appraiser;
@property (nonatomic) double costOfFeedItemsForLastTransformation;
@property (copy, nonatomic) NSDictionary *costByFeedItemIDsForLastTransformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
