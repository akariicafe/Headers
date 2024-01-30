@class NSString;
@protocol WFExpandingParameterHintProvider;

@interface WFExpandingParameter : WFParameter

@property (weak, nonatomic) id<WFExpandingParameterHintProvider> hintProvider;
@property (readonly, nonatomic) NSString *hintLabel;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (id)defaultSupportedVariableTypes;
- (id)importQuestionBehavior;
- (Class)singleStateClass;

@end
