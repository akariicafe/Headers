@class INObjectCollection, NSString, INCodableAttribute, INStringLocalizer;

@interface WFCustomIntentDynamicEnumerationParameter : WFDynamicEnumerationParameter <WFCodableAttributeBackedParameter>

@property (retain, nonatomic) INObjectCollection *possibleStatesCollection;
@property (retain, nonatomic) INCodableAttribute *codableAttribute;
@property (retain, nonatomic) INStringLocalizer *stringLocalizer;
@property (readonly, nonatomic) NSString *localizedConfigurationPromptDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (Class)singleStateClass;
- (id)localizedSubtitleLabelForPossibleState:(id)a0;
- (id)accessoryIconForPossibleState:(id)a0;
- (BOOL)hidesSubtitleInEditor;
- (BOOL)displaysMultipleValueEditor;
- (BOOL)parameterStateIsValid:(id)a0;
- (void)getStatesWithSearchTerm:(id)a0 completionHandler:(id /* block */)a1;

@end
