@class NSNumber, NSString;

@interface MTStoreIdentifier : NSObject

@property (retain, nonatomic) NSNumber *storeIdentifier;
@property (retain, nonatomic) NSString *feedUrl;

+ (id)validatedIdNumberFromStoreId:(long long)a0;
+ (BOOL)isNotEmptyNumber:(id)a0;
+ (BOOL)isEmptyNumber:(id)a0;
+ (BOOL)isNotEmpty:(long long)a0;
+ (BOOL)isEmpty:(long long)a0;
+ (id)identifierWithFeedUrl:(id)a0;
+ (id)identifierWithFeedUrl:(id)a0 storeIdentifier:(id)a1;
+ (long long)adamIdFromSerpentId:(long long)a0;
+ (id)adamIdNumberFromStoreId:(long long)a0;
+ (long long)serpentIdFromAdamId:(long long)a0;

- (void).cxx_destruct;
- (id)initWithFeedUrl:(id)a0 storeIdentifier:(id)a1;
- (id)initWithFeedUrl:(id)a0;

@end
