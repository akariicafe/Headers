@class NSArray, NSString, NSMutableDictionary, NSMutableArray;

@interface POXSComplexTypeDefinition : POXSDefinition {
    NSMutableArray *_attributes;
    NSMutableArray *_elements;
    NSMutableDictionary *_elementAttributes;
    NSMutableDictionary *_attributeAttributes;
    NSMutableArray *_namespaces;
    NSMutableDictionary *_properties;
}

@property (readonly, copy, nonatomic) NSArray *attributes;
@property (readonly, copy, nonatomic) NSArray *elements;
@property (readonly, copy, nonatomic) NSArray *namespaces;
@property (readonly, copy, nonatomic) NSString *contentPropertyName;

+ (id)_descriptionForValue:(id)a0 prefix:(id)a1;
+ (id)descriptionForValue:(id)a0;

- (void)setProperty:(id)a0 forName:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)propertyForName:(id)a0;
- (void).cxx_destruct;
- (id)isSpecifiedKeyForAttributeName:(id)a0;
- (id)_attributeForName:(id)a0 ofAttributeWithName:(id)a1;
- (id)_attributeForName:(id)a0 ofElementWithName:(id)a1;
- (id)_attributeForName:(id)a0 ofNodeWithName:(id)a1 attributes:(id)a2;
- (void)_setAttribute:(id)a0 forName:(id)a1 ofAttributeWithName:(id)a2;
- (void)_setAttribute:(id)a0 forName:(id)a1 ofElementWithName:(id)a2;
- (void)_setAttribute:(id)a0 forName:(id)a1 ofNodeWithName:(id)a2 attributes:(id)a3;
- (void)addAttributeWithName:(id)a0 type:(Class)a1;
- (void)addAttributeWithName:(id)a0 type:(Class)a1 isSpecifiedKey:(id)a2;
- (void)addAttributeWithName:(id)a0 type:(Class)a1 namespaceURI:(id)a2;
- (void)addElementWithName:(id)a0 namespaceURI:(id)a1 type:(Class)a2;
- (void)addElementWithName:(id)a0 namespaceURI:(id)a1 type:(Class)a2 isSpecifiedKey:(id)a3;
- (void)addElementWithName:(id)a0 namespaceURI:(id)a1 type:(Class)a2 maxOccurs:(unsigned long long)a3 minOccurs:(unsigned long long)a4;
- (void)addElementWithName:(id)a0 namespaceURI:(id)a1 type:(Class)a2 maxOccurs:(unsigned long long)a3 minOccurs:(unsigned long long)a4 flattenMultiValue:(BOOL)a5;
- (void)addNamespaceWithURI:(id)a0;
- (void)addUnboundedElementWithName:(id)a0 namespaceURI:(id)a1 type:(Class)a2;
- (BOOL)flattenMultiValueElementWithName:(id)a0;
- (id)isSpecifiedKeyForElementName:(id)a0;
- (unsigned long long)maxCountForElementName:(id)a0;
- (unsigned long long)minCountForElementName:(id)a0;
- (id)namespaceForAttributeName:(id)a0;
- (void)setContentPropertyName:(id)a0 type:(Class)a1;
- (void)setIsSpecifiedKey:(id)a0 onElementWithName:(id)a1;

@end
