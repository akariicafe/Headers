@class NSString;

@interface PGGraphLanguageNode : PGGraphOptimizedNode

@property (readonly, nonatomic) NSString *localeIdentifier;

+ (id)filter;
+ (id)filterWithLocaleIdentifiers:(id)a0;

- (BOOL)hasProperties:(id)a0;
- (id)description;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)propertyForKey:(id)a0;

@end
