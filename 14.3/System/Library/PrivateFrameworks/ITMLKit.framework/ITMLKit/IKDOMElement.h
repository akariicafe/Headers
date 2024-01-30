@class NSString, NSArray, IKDOMHTMLCollection, NSMutableDictionary, NSDictionary, IKViewElementStyleComposer, IKDOMNamedNodeMap;
@protocol IKStyleableElement;

@interface IKDOMElement : IKDOMNode <IKJDOMParsingElement, IKStyleableElement, IKJSDOMElement, _IKJSDOMElementProxy, _IKJSDOMElement, IKJSDOMParentNode> {
    NSMutableDictionary *_metadataDict;
    NSArray *_cachedChildElements;
    NSDictionary *_cachedAttributes;
}

@property (retain, nonatomic) NSString *innerHTML;
@property (retain, nonatomic) NSString *outerHTML;
@property (readonly, nonatomic) BOOL _isPrototypeElement;
@property (readonly, nonatomic) BOOL _isPartOfPrototypeElement;
@property (weak, nonatomic, setter=_setAliasOf:) IKDOMElement *_aliasOf;
@property (readonly, weak, nonatomic) id<IKStyleableElement> parentStyleableElement;
@property (readonly, copy, nonatomic) NSString *elementName;
@property (retain, nonatomic) IKViewElementStyleComposer *styleComposer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain, nonatomic) NSString *tagName;
@property (readonly, copy, nonatomic) IKDOMNamedNodeMap *attributes;
@property (readonly, nonatomic) IKDOMHTMLCollection *children;
@property (readonly, nonatomic) IKDOMElement *firstElementChild;
@property (readonly, nonatomic) IKDOMElement *lastElementChild;
@property (readonly, nonatomic) unsigned long long childElementCount;

+ (id)_filteredAttributes;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (long long)nodeType;
- (void).cxx_destruct;
- (BOOL)hasAttributes;
- (BOOL)hasAttribute:(id)a0;
- (id)nodeName;
- (id)getAttribute:(id)a0;
- (id)textContent;
- (void)removeAttribute:(id)a0;
- (id)_attributes;
- (id)getElementsByTagName:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setTextContent:(id)a0;
- (void)setAttribute:(id)a0 :(id)a1;
- (id)childElementsByTagName:(id)a0;
- (void)domib_setAppDataSet:(id)a0;
- (id)domib_appDataSet;
- (void)domib_setItemsChangeSet:(id)a0;
- (id)domib_itemsChangeSet;
- (void)domib_setVisibleIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })domib_visibleIndexRange;
- (id)childElements;
- (id)ik_templateName;
- (void)childrenUpdatedWithUpdatedChildNodes:(id)a0 notify:(BOOL)a1;
- (void)setAttributeValue:(id)a0 withName:(id)a1;
- (void)_markUpdatedForChangeInAttribute:(id)a0 fromValue:(id)a1 toValue:(id)a2;
- (id)asPrivateIKJSDOMElement;
- (id)childElementByTagName:(id)a0;
- (void)domp_setPrototype:(id)a0;
- (id)domp_prototype;
- (void)domp_setDerivativeDOMElementsBySelector:(id)a0;
- (id)domp_derivativeDOMElementsBySelector;
- (void)insertAdjacentHTML:(id)a0 :(id)a1;
- (id)ik_templateElementCSSSelectorList;
- (id)domb_boundCSSRule;
- (void)domb_setDOMBindingController:(id)a0;
- (id)domb_domBindingController;
- (void)domb_setDataBinding:(id)a0;
- (id)domb_dataBinding;
- (void)domb_setMutationRuleSet:(id)a0;
- (id)domb_mutationRuleSet;
- (void)domb_setBoundCSSRule:(id)a0;
- (void)ikve_setPrototypesID:(id)a0;
- (id)ikve_prototypesID;
- (void)ikve_setRulesID:(id)a0;
- (id)ikve_rulesID;
- (void)dombs_setItems:(id)a0;
- (id)dombs_items;

@end
