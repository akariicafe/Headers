@class NSDictionary;

@interface NUFilterParameters : NSObject

@property (copy) NSDictionary *inputNodes;
@property (copy) NSDictionary *settings;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
