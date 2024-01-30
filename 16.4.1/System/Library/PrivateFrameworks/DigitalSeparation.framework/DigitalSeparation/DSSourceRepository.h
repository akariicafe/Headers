@class NSDictionary, NSArray;

@interface DSSourceRepository : NSObject

@property (copy, nonatomic) NSDictionary *sourcesByName;
@property (readonly, copy, nonatomic) NSArray *sources;

+ (void)initialize;
+ (id)repositoryWithURL:(id)a0;

- (id)objectForKeyedSubscript:(id)a0;
- (id)init;
- (id)initWithSources:(id)a0;
- (void).cxx_destruct;

@end
