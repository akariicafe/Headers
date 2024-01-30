@class NSNumber, NSString;

@interface MTStoreIdentifier : NSObject

@property (retain, nonatomic) NSNumber *storeIdentifier;
@property (retain, nonatomic) NSString *feedUrl;

+ (BOOL)isEmpty:(long long)a0;
+ (long long)adamIDFromSerpentId:(long long)a0;
+ (long long)serpentIdFromAdamId:(long long)a0;
+ (BOOL)isEmptyNumber:(id)a0;
+ (id)adamIdNumberFromSerpentIdNumber:(id)a0;
+ (id)serpentIdNumberFromAdamIdNumber:(id)a0;
+ (id)podcastPredicateForIdentifer:(id)a0;
+ (BOOL)isNotEmpty:(long long)a0;
+ (id)identifierWithFeedUrl:(id)a0;
+ (id)identifierWithFeedUrl:(id)a0 storeIdentifier:(id)a1;
+ (id)episodePredicateForIdentifier:(id)a0;
+ (id)adamIDListFromSerpentIdList:(id)a0;
+ (id)adamIdNumberFromStoreId:(long long)a0;
+ (id)serpentIdListFromAdamIDList:(id)a0;
+ (id)serpentIdNumberFromStoreId:(long long)a0;
+ (BOOL)isNotEmptyNumber:(id)a0;

- (void).cxx_destruct;
- (id)initWithFeedUrl:(id)a0 storeIdentifier:(id)a1;
- (id)initWithFeedUrl:(id)a0;

@end
