@class NSString, UISSlotMachine;

@interface SLDCollaborationFooterService : SLDRemoteRenderingService <SLDService, SLDFooterViewService>

@property (retain, nonatomic) UISSlotMachine *footerViewSlotMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteObjectProtocol;
+ (id)sharedService;
+ (id)nameFromNameComponents:(id)a0;
+ (void)slotForModel:(id)a0 maxWidth:(double)a1 completion:(id /* block */)a2;
+ (void)slotForModelNeedingNameAndEmail:(id)a0 maxWidth:(double)a1 completion:(id /* block */)a2;

- (void).cxx_destruct;
- (void)footerViewForModel:(id)a0 style:(id)a1 maxWidth:(double)a2 layerContextID:(unsigned long long)a3 reply:(id /* block */)a4;
- (id)slotMachineForViewIdentifier:(id)a0;

@end
