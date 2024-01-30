@interface WFAskWhenRunVariable : WFVariable

- (id)init;
- (BOOL)isAvailable;
- (id)icon;
- (id)name;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsAggrandizements;
- (BOOL)requiresModernVariableSupport;

@end
