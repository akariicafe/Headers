@class INStringLocalizer, NSString, INCodableAttribute;
@protocol WFDynamicResolveParameterDataSource, WFDynamicResolveParameterDelegate;

@interface WFDynamicResolveParameter : WFParameter <WFCodableAttributeBackedParameter>

@property (retain, nonatomic) INCodableAttribute *codableAttribute;
@property (retain, nonatomic) INStringLocalizer *stringLocalizer;
@property (weak, nonatomic) id<WFDynamicResolveParameterDataSource> dataSource;
@property (weak, nonatomic) id<WFDynamicResolveParameterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (id)localizedLabelForState:(id)a0;
- (void)resolveOptionsForUserInput:(id)a0 completionBlock:(id /* block */)a1;
- (void)endResolutionSession;
- (void)localizedDisambiguationPromptForItems:(id)a0 intent:(id)a1 completion:(id /* block */)a2;

@end
