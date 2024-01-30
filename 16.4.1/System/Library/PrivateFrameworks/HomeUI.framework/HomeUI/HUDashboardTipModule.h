@class TPKContent, HFStaticItemProvider, NSString, TPKContentController;

@interface HUDashboardTipModule : HFItemModule <TPKContentControllerDelegate>

@property (readonly, nonatomic) HFStaticItemProvider *dashboardTipItemProvider;
@property (retain, nonatomic) TPKContent *tipContent;
@property (readonly, nonatomic) TPKContentController *tipContentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentController:(id)a0 didFinishWithContent:(id)a1 animated:(BOOL)a2;
- (void)contentController:(id)a0 contentDidBecomeAvailable:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)itemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithContext:(id)a0 itemUpdater:(id)a1;
- (id)initWithItemUpdater:(id)a0;

@end
