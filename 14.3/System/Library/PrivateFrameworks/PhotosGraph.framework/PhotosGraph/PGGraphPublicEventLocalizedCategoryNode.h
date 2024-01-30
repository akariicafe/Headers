@class NSString;

@interface PGGraphPublicEventLocalizedCategoryNode : PGGraphOptimizedNode {
    NSString *_label;
}

@property (readonly) unsigned char level : 8;

- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)description;
- (id)initWithLabel:(id)a0;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;

@end
