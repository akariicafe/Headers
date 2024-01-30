@interface WFClipboardVariable : WFVariable

- (id)iconImage;
- (id)name;
- (BOOL)isAvailable;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (id)possibleContentClassesWithContext:(id)a0;
- (id)initWithAggrandizements:(id)a0;
- (BOOL)requiresModernVariableSupport;
- (id)requiredAccessResources;

@end
