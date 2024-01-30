@class NSDictionary;

@interface AMSEngagementAppWhitelistModel : NSObject

@property (readonly, nonatomic) NSDictionary *definition;
@property (readonly, nonatomic) BOOL allowsResponse;

+ (BOOL)matchEvent:(id)a0 toFilter:(id)a1;

- (void).cxx_destruct;
- (id)initWithCacheObject:(id)a0;
- (id)exportObject;
- (BOOL)matchesEvent:(id)a0;
- (id)initWithFilter:(id)a0 allowsResponse:(BOOL)a1;

@end
