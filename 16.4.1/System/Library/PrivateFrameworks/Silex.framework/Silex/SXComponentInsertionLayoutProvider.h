@class SXLayoutBlueprint, NSString, SXColumnLayout;
@protocol SXDOMObjectProviding, SXUnitConverterFactory;

@interface SXComponentInsertionLayoutProvider : NSObject <SXComponentInsertionLayoutProvider>

@property (readonly, nonatomic) SXLayoutBlueprint *layoutBlueprint;
@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider;
@property (readonly, nonatomic) id<SXUnitConverterFactory> unitConverterFactory;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } viewportSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } documentSize;
@property (readonly, nonatomic) SXColumnLayout *columnLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForComponent:(id)a0;
- (id)initWithBlueprint:(id)a0 DOMObjectProvider:(id)a1 unitConverterFactory:(id)a2;
- (id)layoutBlueprintForMarker:(id)a0;
- (id)suggestedMarginForMarker:(id)a0;
- (id)unitConverterForMarker:(id)a0;

@end
