@class NSString, SBHIconManager, SBWidgetIcon;
@protocol SBLeafIconDataSource;

@interface SBRemoveWidgetAlertItem : SBAlertItem

@property (retain, nonatomic) id<SBLeafIconDataSource> widget;
@property (retain, nonatomic) SBWidgetIcon *icon;
@property (retain, nonatomic) NSString *iconLocation;
@property (weak, nonatomic) SBHIconManager *iconManager;

- (BOOL)shouldShowInLockScreen;
- (void).cxx_destruct;
- (BOOL)forcesModalAlertAppearance;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)dismissOnLock;
- (void)didActivate;
- (id)initWithWidgetIcon:(id)a0 location:(id)a1 iconManager:(id)a2;
- (id)initWithWidget:(id)a0 inIcon:(id)a1 location:(id)a2 iconManager:(id)a3;

@end
