@protocol WFVariableProvider;

@interface WFShortcutInputVariable : WFVariable {
    id<WFVariableProvider> _variableProvider;
}

- (BOOL)isAvailable;
- (id)icon;
- (void).cxx_destruct;
- (id)name;
- (id)initWithDictionary:(id)a0 variableProvider:(id)a1;
- (id)initWithVariableProvider:(id)a0 aggrandizements:(id)a1;
- (id)possibleContentClassesWithContext:(id)a0;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (id)variableProvider;

@end
