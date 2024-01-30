@protocol WFVariableProvider;

@interface WFExtensionInputVariable : WFVariable {
    id<WFVariableProvider> _variableProvider;
}

- (void).cxx_destruct;
- (BOOL)isAvailable;
- (id)icon;
- (id)name;
- (id)initWithVariableProvider:(id)a0 aggrandizements:(id)a1;
- (id)initWithDictionary:(id)a0 variableProvider:(id)a1;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (id)possibleContentClassesWithContext:(id)a0;
- (id)variableProvider;

@end
