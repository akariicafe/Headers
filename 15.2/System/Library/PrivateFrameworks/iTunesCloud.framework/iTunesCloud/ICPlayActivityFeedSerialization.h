@class NSString;

@interface ICPlayActivityFeedSerialization : NSObject

@property (copy, nonatomic) NSString *currentStoreFrontID;

+ (id)defaultOverrideHTTPHeaderFields;

- (void).cxx_destruct;
- (id)propertyListObjectWithPlayActivityEvent:(id)a0;

@end
