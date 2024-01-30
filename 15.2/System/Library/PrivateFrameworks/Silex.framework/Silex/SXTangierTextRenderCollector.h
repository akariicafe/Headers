@class NSDictionary, NSMutableDictionary, NSString;

@interface SXTangierTextRenderCollector : NSObject <SXTextRenderCollector, SXTangierTextRepBehavior>

@property (retain, nonatomic) NSMutableDictionary *flows;
@property (retain, nonatomic) NSDictionary *previousFlows;
@property (retain, nonatomic) NSMutableDictionary *layoutsByComponentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)addTextStorage:(id)a0 withLayout:(id)a1 forNamedFlow:(id)a2 directLayerHostView:(id)a3 selectable:(BOOL)a4 componentIdentifier:(id)a5;
- (id)itemWithIdentifier:(id)a0 storage:(id)a1 directLayerHost:(id)a2 inItems:(id)a3;
- (void)storeItem:(id)a0 forFlowName:(id)a1;
- (void)buildFlowsAndUpdateInfosWithICC:(id)a0;
- (BOOL)tangierTextRepAllowsSelection:(id)a0;
- (void)buildFlowsAndUpdateInfosWithICC:(id)a0 updateBlock:(id /* block */)a1;
- (id)infoForStorage:(id)a0 selection:(id)a1;
- (id)flowLayoutForComponentIdentifier:(id)a0;
- (id)componentIdentifierForFlowLayout:(id)a0;

@end
