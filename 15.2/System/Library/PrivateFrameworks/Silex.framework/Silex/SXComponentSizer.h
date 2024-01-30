@class SXLayoutOptions, NSMutableDictionary;
@protocol SXComponent, SXComponentState, SXComponentStyle, SXComponentLayout, SXDOMObjectProviding;

@interface SXComponentSizer : NSObject

@property (nonatomic) struct CGSize { double width; double height; } suggestedSize;
@property (retain, nonatomic) id<SXComponentState> componentState;
@property (readonly, nonatomic) NSMutableDictionary *infoForRendering;
@property (readonly, nonatomic) id<SXComponent> component;
@property (readonly, nonatomic) id<SXComponentLayout> componentLayout;
@property (readonly, nonatomic) id<SXComponentStyle> componentStyle;
@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider;
@property (readonly, nonatomic) SXLayoutOptions *layoutOptions;

- (void).cxx_destruct;
- (id)initWithComponent:(id)a0 componentLayout:(id)a1 componentStyle:(id)a2 DOMObjectProvider:(id)a3 layoutOptions:(id)a4;
- (double)calculateHeightForWidth:(double)a0 layoutContext:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })overrideColumnLayoutForColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inColumnLayout:(id)a1;
- (unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)a0;
- (unsigned long long)shouldIgnoreViewportPaddingForColumnLayout:(id)a0;
- (BOOL)requiresSizeChangeForStateChange:(id)a0 fromState:(id)a1;
- (long long)minimumColumnLength;
- (void)saveInfo:(id)a0 forRenderingPhaseWithIdentifier:(id)a1;
- (id)snapLines;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsWithUnitConverter:(id)a0;
- (BOOL)allowComponentIntersection;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMarginsWithUnitConverter:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bordersInsetsWithUnitConverter:(id)a0;

@end
