@class NSString, UISSlotMachine;

@interface SLDPillService : SLDRemoteRenderingService <SLDService, SLDPillService>

@property (retain, nonatomic) UISSlotMachine *highlightPillSlotMachine;
@property (retain, nonatomic) UISSlotMachine *highlightDisambiguationPillSlotMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteObjectProtocol;
+ (id)sharedService;

- (void).cxx_destruct;
- (void)accessibilityLabelForAttributionIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)accessibilityLabelForAttributionIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)highlightDisambiguationPillForAttributionIdentifier:(id)a0 style:(id)a1 maxWidth:(double)a2 variant:(unsigned long long)a3 layerContextID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)highlightPillForAttributionIdentifiers:(id)a0 style:(id)a1 maxWidth:(double)a2 variant:(unsigned long long)a3 layerContextID:(unsigned long long)a4 reply:(id /* block */)a5;
- (id)_applicationIdentifierForConnection:(id)a0;
- (id)_attributionsFromIDs:(id)a0 appID:(id)a1;
- (id)slotMachineForViewIdentifier:(id)a0;

@end
