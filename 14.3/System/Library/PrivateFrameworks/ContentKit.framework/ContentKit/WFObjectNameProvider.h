@class NSDictionary;

@interface WFObjectNameProvider : NSObject

@property (readonly, copy, nonatomic) NSDictionary *contents;

+ (id)sharedProvider;

- (id)init;
- (void).cxx_destruct;
- (id)nameForObject:(id)a0;

@end
