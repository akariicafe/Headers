@class NSArray, NSString;

@interface AMSEngagementAppData : NSObject

@property (retain, nonatomic) NSArray *cachedResponses;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *whitelist;

- (void).cxx_destruct;
- (id)exportObject;
- (id)initWithIdentifier:(id)a0 cacheObject:(id)a1;

@end
