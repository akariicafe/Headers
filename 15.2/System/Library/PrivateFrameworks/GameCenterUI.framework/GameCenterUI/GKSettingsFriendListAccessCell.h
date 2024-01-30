@class GKGameSettingsInternal, GKGame;

@interface GKSettingsFriendListAccessCell : PSSwitchTableCell

@property (retain, nonatomic) GKGame *currentGame;
@property (retain, nonatomic) GKGameSettingsInternal *currentGameSettings;

+ (long long)cellStyle;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)controlChanged:(id)a0;
- (id)getSwitch;

@end
