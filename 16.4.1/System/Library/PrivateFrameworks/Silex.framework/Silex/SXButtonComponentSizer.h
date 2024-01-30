@class NSString, SXTextLayouter;

@interface SXButtonComponentSizer : SXComponentSizer <SXTextSourceDataSource>

@property (readonly, nonatomic) SXTextLayouter *textLayouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)calculateHeightForWidth:(double)a0 layoutContext:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsWithUnitConverter:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMarginsWithUnitConverter:(id)a0;
- (id)additionsForTextSource:(id)a0;
- (id)componentTextStyleForTextSource:(id)a0 inheritingFromDefaultStyles:(BOOL)a1;
- (id)contentSizeCategoryForTextSource:(id)a0;
- (id)defaultComponentTextStyleForTextSource:(id)a0;
- (id)defaultComponentTextStylesForTextSource:(id)a0;
- (id)initWithComponent:(id)a0 componentLayout:(id)a1 componentStyle:(id)a2 DOMObjectProvider:(id)a3 layoutOptions:(id)a4 textProvider:(id)a5 textComponentLayoutHosting:(id)a6 textSourceFactory:(id)a7;
- (id)inlineTextStylesForTextSource:(id)a0;
- (id)textResizerForTextSource:(id)a0;
- (id)textRulesForTextSource:(id)a0;
- (id)textStyleForIdentifier:(id)a0;

@end
