@class NSString, HUPersonalRequestsEditorItemManager, HUPersonalRequestsDevicesModuleController;

@interface HUPersonalRequestsEditorTableViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager;
@property (readonly, nonatomic) HUPersonalRequestsDevicesModuleController *prDevicesModuleController;
@property (nonatomic) BOOL onlyShowDeviceSwitches;

- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (id)initWithUserItem:(id)a0 onlyShowDeviceSwitches:(BOOL)a1;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (BOOL)automaticallyUpdatesViewControllerTitle;
- (id)itemModuleControllers;
- (id)initWithAccessoryGroupItem:(id)a0;
- (id)initWithUserItem:(id)a0 sourceMediaProfileContainer:(id)a1 onlyShowDeviceSwitches:(BOOL)a2;

@end
