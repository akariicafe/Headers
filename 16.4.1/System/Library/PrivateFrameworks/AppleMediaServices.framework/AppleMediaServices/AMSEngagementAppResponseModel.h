@class NSDictionary, NSString, NSDate;

@interface AMSEngagementAppResponseModel : NSObject

@property (readonly, nonatomic) NSDictionary *definition;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) NSDate *created;
@property (readonly, nonatomic) NSDictionary *responseData;

+ (BOOL)_shouldEvictDefinition:(id)a0 created:(id)a1;

- (BOOL)matchesEvent:(id)a0;
- (id)exportObject;
- (id)initWithCacheObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 cacheInfo:(id)a1;

@end
