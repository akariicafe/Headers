@class NSString, HUAccessorySettingsSiriOutputVoiceItemManager;

@interface HUAccessorySettingsSiriOutputVoiceViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol>

@property (readonly, nonatomic) HUAccessorySettingsSiriOutputVoiceItemManager *itemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (id)initWithAccessoryGroupItem:(id)a0;

@end
