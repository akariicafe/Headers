@class NSString, UISSlotMachine;

@interface SLDCollaborationAttributionViewService : SLDRemoteRenderingService <SLDService, SLDCollaborationAttributionViewService>

@property (retain, nonatomic) UISSlotMachine *slotMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteObjectProtocol;
+ (id)sharedService;
+ (void)setupInterface:(id)a0;

- (void).cxx_destruct;
- (void)accessibilityLabelForAttributionIdentifiers:(id)a0 reply:(id /* block */)a1;
- (id)_applicationIdentifierForConnection:(id)a0;
- (id)_attributionsFromIDs:(id)a0 appID:(id)a1;
- (void)collaborationAttributionViewForTitle:(id)a0 attributionIdentifiers:(id)a1 style:(id)a2 placeholderGlyphConfiguration:(id)a3 maxWidth:(double)a4 variant:(long long)a5 layerContextID:(unsigned long long)a6 reply:(id /* block */)a7;
- (id)slotMachineForViewIdentifier:(id)a0;

@end
