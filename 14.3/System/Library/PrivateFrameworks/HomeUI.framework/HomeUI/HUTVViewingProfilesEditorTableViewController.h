@class HUTVViewingProfilesDevicesModuleController, NSString;

@interface HUTVViewingProfilesEditorTableViewController : HUItemTableViewController <HUItemTableModuleControllerHosting>

@property (readonly, nonatomic) HUTVViewingProfilesDevicesModuleController *tvpDevicesModuleController;
@property (nonatomic) BOOL hideHeadersAndFooters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)moduleController:(id)a0 presentViewControllerForRequest:(id)a1;
- (id)moduleController:(id)a0 dismissViewControllerForRequest:(id)a1;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (BOOL)automaticallyUpdatesViewControllerTitle;
- (id)moduleController:(id)a0 textFieldForVisibleItem:(id)a1;
- (id)initWithUserItem:(id)a0;
- (id)itemModuleControllers;

@end
