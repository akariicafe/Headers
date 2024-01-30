@class NSString, HFSimpleItemManager;
@protocol HUQuickControlItemHosting;

@interface HUQuickControlSimpleItemUpdater : NSObject <HFItemManagerDelegate, HUQuickControlItemUpdating>

@property (readonly, nonatomic) HFSimpleItemManager *itemManager;
@property (readonly, weak, nonatomic) id<HUQuickControlItemHosting> itemHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_setExternalItemManagerUpdatesDisabled:(BOOL)a0;
- (id)initWithItemHost:(id)a0;
- (void)itemManager:(id)a0 performUpdateRequest:(id)a1;
- (void)quickControlItemHost:(id)a0 didUpdateVisibility:(BOOL)a1;

@end
