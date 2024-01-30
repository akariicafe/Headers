@class NSString;
@protocol WFVariableProvider;

@interface WFUserDefinedVariable : WFVariable {
    id<WFVariableProvider> _variableProvider;
}

@property (readonly, nonatomic) NSString *name;

- (id)iconImage;
- (id)UUID;
- (void).cxx_destruct;
- (BOOL)isAvailable;
- (id)initWithDictionary:(id)a0 variableProvider:(id)a1;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (id)possibleContentClassesWithContext:(id)a0;
- (id)variableProvider;
- (BOOL)requiresModernVariableSupport;
- (void)variableProvider:(id)a0 variableNameDidChangeTo:(id)a1;
- (id)initWithName:(id)a0 variableProvider:(id)a1 aggrandizements:(id)a2;

@end
