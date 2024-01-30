@class NSString;
@protocol WFVariableProvider;

@interface WFUserDefinedVariable : WFVariable {
    id<WFVariableProvider> _variableProvider;
}

@property (readonly, nonatomic) NSString *name;

- (BOOL)isAvailable;
- (id)icon;
- (id)UUID;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 variableProvider:(id)a1;
- (id)initWithName:(id)a0 variableProvider:(id)a1 aggrandizements:(id)a2;
- (id)possibleContentClassesWithContext:(id)a0;
- (BOOL)requiresModernVariableSupport;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (id)variableProvider;
- (void)variableProvider:(id)a0 variableNameDidChangeTo:(id)a1;

@end
