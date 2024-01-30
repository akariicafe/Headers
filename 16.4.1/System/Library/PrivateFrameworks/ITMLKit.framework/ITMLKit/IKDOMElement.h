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

- (id)_attributes;
- (long long)nodeType;
- (BOOL)hasAttributes;
- (id)objectForKeyedSubscript:(id)a0;
- (BOOL)hasAttribute:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (id)childElements;
- (void)setTextContent:(id)a0;
- (id)getAttribute:(id)a0;
- (id)getElementsByTagName:(id)a0;
- (id)textContent;
- (id)nodeName;
- (void)removeAttribute:(id)a0;
- (id)childElementsByTagName:(id)a0;
- (void)setAttribute:(id)a0 :(id)a1;
- (void)dombs_setItems:(id)a0;
- (id)ik_templateName;
- (void)_markUpdatedForChangeInAttribute:(id)a0 fromValue:(id)a1 toValue:(id)a2;
- (id)asPrivateIKJSDOMElement;
- (id)childElementByTagName:(id)a0;
- (void)childrenUpdatedWithUpdatedChildNodes:(id)a0 notify:(BOOL)a1;
- (id)domb_boundCSSRule;
- (id)domb_dataBinding;
- (id)domb_domBindingController;
- (id)domb_mutationRuleSet;
- (void)domb_setBoundCSSRule:(id)a0;
- (void)domb_setDOMBindingController:(id)a0;
- (void)domb_setDataBinding:(id)a0;
- (void)domb_setMutationRuleSet:(id)a0;
- (id)dombs_items;
- (id)domib_appDataSet;
- (id)domib_itemsChangeSet;
- (void)domib_setAppDataSet:(id)a0;
- (void)domib_setItemsChangeSet:(id)a0;
- (void)domib_setVisibleIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })domib_visibleIndexRange;
- (id)domp_derivativeDOMElementsBySelector;
- (id)domp_prototype;
- (void)domp_setDerivativeDOMElementsBySelector:(id)a0;
- (void)domp_setPrototype:(id)a0;
- (id)ik_templateElementCSSSelectorList;
- (id)ikve_prototypesID;
- (id)ikve_rulesID;
- (void)ikve_setPrototypesID:(id)a0;
- (void)ikve_setRulesID:(id)a0;
- (void)insertAdjacentHTML:(id)a0 :(id)a1;
- (void)setAttributeValue:(id)a0 withName:(id)a1;

@end
