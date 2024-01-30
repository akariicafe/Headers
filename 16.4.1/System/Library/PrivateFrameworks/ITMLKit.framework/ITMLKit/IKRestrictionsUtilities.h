@class NSString;

@interface IKRestrictionsUtilities : NSObject <NSCacheDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_purgableRatingsDictionary;
+ (id)_ratingDictionaryForDomain:(id)a0 countryCode:(id)a1;
+ (id)orderedRankingsInDomain:(id)a0 countryCode:(id)a1;
+ (id)rankingForRestrictionRating:(id)a0 inDomain:(id)a1 countryCode:(id)a2;
+ (id)ratingForRestrictionRanking:(id)a0 inDomain:(id)a1 countryCode:(id)a2;

- (void)cache:(id)a0 willEvictObject:(id)a1;

@end
