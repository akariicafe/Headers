@class NSString;

@interface WFDictionaryValueVariableAggrandizement : WFVariableAggrandizement

@property (readonly, nonatomic) NSString *dictionaryKey;

- (id)initWithDictionary:(id)a0;
- (id)initWithDictionaryKey:(id)a0;
- (void)applyToContentCollection:(id)a0 completionHandler:(id /* block */)a1;
- (id)processedContentClasses:(id)a0;

@end
