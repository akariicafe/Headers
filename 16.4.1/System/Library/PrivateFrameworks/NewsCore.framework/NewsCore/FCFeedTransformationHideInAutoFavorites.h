@class NSDictionary, NSSet, NSString;

@interface FCFeedTransformationHideInAutoFavorites : NSObject <FCFeedTransforming>

@property (copy, nonatomic) NSDictionary *feedContextByFeedID;
@property (copy, nonatomic) NSSet *autoFavoriteTagIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformationWithFeedContextByFeedID:(id)a0 autoFavoriteTagIDs:(id)a1;

- (id)transformFeedItems:(id)a0;
- (void).cxx_destruct;

@end
