@interface WFCurrentDateVariable : WFVariable

- (BOOL)isAvailable;
- (id)icon;
- (id)name;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (id)possibleContentClassesWithContext:(id)a0;
- (id)initWithAggrandizements:(id)a0;

@end
