@class NSString;
@protocol SBVoiceOverTouchLabelElementAlertItemDelegate;

@interface SBVoiceOverTouchLabelElementAlertItem : SBAlertItem <UITextFieldDelegate, UIAlertViewDelegate>

@property (retain, nonatomic) NSString *initialValue;
@property (weak, nonatomic) id<SBVoiceOverTouchLabelElementAlertItemDelegate> voiceOverAlertItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)allowMenuButtonDismissal;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)reappearsAfterLock;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)shouldShowInLockScreen;
- (BOOL)willShowInAwayItems;

@end
