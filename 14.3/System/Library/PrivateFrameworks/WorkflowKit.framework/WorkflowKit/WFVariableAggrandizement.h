@class NSDictionary;

@interface WFVariableAggrandizement : NSObject

@property (readonly, nonatomic) NSDictionary *dictionary;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)processedContentClasses:(id)a0;
- (void)applyToContentCollection:(id)a0 completionHandler:(id /* block */)a1;

@end
