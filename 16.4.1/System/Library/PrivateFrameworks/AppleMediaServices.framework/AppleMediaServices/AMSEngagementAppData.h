@class NSArray, NSString;

@interface AMSEngagementAppData : NSObject

@property (retain, nonatomic) NSArray *cachedResponses;
@property (retain, nonatomic) NSArray *eventFilters;
@property (readonly, nonatomic) NSString *identifier;

- (id)initWithIdentifier:(id)a0 cacheObject:(id)a1;
- (id)exportObject;
- (void).cxx_destruct;

@end
