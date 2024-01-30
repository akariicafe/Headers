@class NSDictionary, NSString, NSDate;

@interface AMSEngagementAppResponseModel : NSObject

@property (readonly, nonatomic) NSDictionary *definition;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) NSDate *created;
@property (readonly, nonatomic) NSDictionary *responseData;

+ (BOOL)_shouldEvictDefinition:(id)a0 created:(id)a1;

- (id)initWithCacheObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)matchesEvent:(id)a0;
- (id)exportObject;
- (id)initWithData:(id)a0 cacheInfo:(id)a1;

@end
