@class NSDictionary;

@interface AMSEngagementAppEventFilterModel : NSObject

@property (readonly, nonatomic) NSDictionary *definition;
@property (readonly, nonatomic) BOOL allowsResponse;
@property (readonly, nonatomic) unsigned long long components;

+ (BOOL)matchEvent:(id)a0 toFilter:(id)a1;

- (BOOL)matchesEvent:(id)a0;
- (id)exportObject;
- (id)initWithDefinition:(id)a0;
- (id)initWithCacheObject:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
