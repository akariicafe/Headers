@class NSDictionary;

@interface WFVariableAggrandizement : NSObject

@property (readonly, nonatomic) NSDictionary *dictionary;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)processedContentClasses:(id)a0;
- (void)applyToContentCollection:(id)a0 completionHandler:(id /* block */)a1;

@end
