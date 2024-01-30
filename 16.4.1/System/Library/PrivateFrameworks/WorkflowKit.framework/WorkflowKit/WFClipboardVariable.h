@interface WFClipboardVariable : WFVariable

- (BOOL)isAvailable;
- (id)icon;
- (id)name;
- (id)initWithAggrandizements:(id)a0;
- (id)possibleContentClassesWithContext:(id)a0;
- (id)requiredAccessResources;
- (BOOL)requiresModernVariableSupport;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;

@end
