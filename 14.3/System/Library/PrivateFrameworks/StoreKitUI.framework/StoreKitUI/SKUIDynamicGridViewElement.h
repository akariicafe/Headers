@class NSMutableDictionary;

@interface SKUIDynamicGridViewElement : SKUIGridViewElement {
    BOOL _hasValidTemplateDefinitionMap;
    NSMutableDictionary *_templateDefinitionTypeToModeValueMap;
}

@property (readonly, nonatomic) BOOL hasSectionHeaders;
@property (readonly, nonatomic, getter=isMalformed) BOOL malformed;
@property (readonly, nonatomic) long long minimumEntityCountForSections;

- (void).cxx_destruct;
- (BOOL)allowsMultipleSelectionDuringEditing;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)applyUpdatesWithElement:(id)a0;
- (long long)pageComponentType;
- (BOOL)isDynamicContainer;
- (id)templateDefinitionViewElementsForType:(id)a0 mode:(id)a1;
- (id)bestTemplateDefinitionViewElementFromTemplateDefinitionViewElements:(id)a0 entityValueProvider:(id)a1;
- (id)_templateDefinitionTypeToModeValueMap;
- (void)_unfilteredEnumerateChildrenUsingBlock:(id /* block */)a0;

@end
