@class WFAction;

@interface WFMediaPickerParameter : WFParameter

@property (weak, nonatomic) WFAction *action;

- (void).cxx_destruct;
- (Class)singleStateClass;
- (BOOL)parameterStateIsValid:(id)a0;
- (id)localizedLabelForState:(id)a0;

@end
