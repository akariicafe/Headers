@class NSString, WFTextEditingHintView, NSDateFormatter;

@interface WFDateFieldParameterSummaryEditor : WFTextInputParameterSummaryEditor <WFParameterEventObserver>

@property (weak, nonatomic) WFTextEditingHintView *hintView;
@property (retain, nonatomic) NSDateFormatter *hintDateFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)parameterAttributesDidChange:(id)a0;
- (void)textEntryDidFinish;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;
- (void)updateHintView;
- (id)hintTextForVariableString:(id)a0;

@end
