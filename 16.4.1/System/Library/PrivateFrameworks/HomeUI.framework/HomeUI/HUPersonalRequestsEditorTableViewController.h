@class NSString, HUPersonalRequestsEditorItemManager, HUPersonalRequestsDevicesModuleController;

@interface HUPersonalRequestsEditorTableViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol, HUSwitchCellDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager;
@property (readonly, nonatomic) HUPersonalRequestsDevicesModuleController *prDevicesModuleController;
@property (nonatomic) BOOL onlyShowDeviceSwitches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)automaticallyUpdatesViewControllerTitle;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithAccessoryGroupItem:(id)a0;
- (id)initWithAccessorySettingItem:(id)a0 module:(id)a1;
- (id)initWithUserItem:(id)a0 onlyShowDeviceSwitches:(BOOL)a1;
- (id)initWithUserItem:(id)a0 sourceMediaProfileContainer:(id)a1 onlyShowDeviceSwitches:(BOOL)a2;
- (id)itemModuleControllers;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
