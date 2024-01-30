@protocol WFVariableProvider;

@interface WFShortcutInputVariable : WFVariable {
    id<WFVariableProvider> _variableProvider;
}

- (id)iconImage;
- (id)iconSymbolName;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isAvailable;
- (id)initWithVariableProvider:(id)a0 aggrandizements:(id)a1;
- (id)initWithDictionary:(id)a0 variableProvider:(id)a1;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (id)possibleContentClassesWithContext:(id)a0;
- (id)variableProvider;

@end
