@class NSString;

@interface SSVPlayActivityFeedSerialization : NSObject

@property (copy, nonatomic) NSString *currentStoreFrontID;

+ (id)defaultOverrideHTTPHeaderFields;

- (void).cxx_destruct;
- (id)propertyListObjectWithPlayActivityEvent:(id)a0;

@end
