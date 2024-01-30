@class HUSoftwareUpdateItemModuleController, NSString, HUSoftwareUpdateRecentUpdatesItemManager;
@protocol HUPresentationDelegate;

@interface HUSoftwareUpdateRecentUpdatesViewController : HUItemTableViewController <HUPresentationDelegateHost>

@property (readonly, nonatomic) HUSoftwareUpdateRecentUpdatesItemManager *itemManager;
@property (retain, nonatomic) HUSoftwareUpdateItemModuleController *softwareUpdateItemModuleController;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (id)itemModuleControllers;

@end
