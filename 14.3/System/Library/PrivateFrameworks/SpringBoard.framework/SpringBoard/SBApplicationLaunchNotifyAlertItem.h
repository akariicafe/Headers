@class SBApplication;

@interface SBApplicationLaunchNotifyAlertItem : SBAlertItem

@property (readonly, nonatomic) SBApplication *application;

- (id)initWithApplication:(id)a0;
- (void).cxx_destruct;
- (BOOL)dismissOnLock;

@end
