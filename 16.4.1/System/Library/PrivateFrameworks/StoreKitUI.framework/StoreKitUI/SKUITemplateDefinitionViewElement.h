@class SKUIViewElement, NSString, SKUIPredicateListViewElement;

@interface SKUITemplateDefinitionViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUIPredicateListViewElement *predicateListViewElement;
@property (readonly, nonatomic) SKUIViewElement *contentViewElement;
@property (readonly, copy, nonatomic) NSString *definitionMode;
@property (readonly, copy, nonatomic) NSString *definitionType;

@end
