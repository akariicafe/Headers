@class PSSpecifier;

@interface GKSettingsGlobalFriendListAccessCell : PSSwitchTableCell

@property (weak, nonatomic) PSSpecifier *specfier;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (void).cxx_destruct;
- (void)controlChanged:(id)a0;
- (id)getSwitch;
- (BOOL)globalFriendListAccess;

@end
