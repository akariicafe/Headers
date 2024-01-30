@class UIContextMenuInteraction, NSString, NCNotificationRequest, UIView;
@protocol NCNotificationOptionsMenuSettingsDelegate;

@interface NCNotificationOptionsMenu : NSObject <UIContextMenuInteractionDelegate>

@property (retain, nonatomic) NCNotificationRequest *request;
@property (retain, nonatomic) UIView *presentingView;
@property (retain, nonatomic) id<NCNotificationOptionsMenuSettingsDelegate> settingsDelegate;
@property (retain, nonatomic) UIContextMenuInteraction *menu;
@property (nonatomic, getter=areOptionsForSection) BOOL optionsForSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 highlightPreviewForItemWithIdentifier:(id)a2;
- (void)dismissMenu;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (id)_sender;
- (id)_sectionIdentifier;
- (id)_threadName;
- (id)_addToContactsAction;
- (BOOL)_canAddToContacts;
- (id)_clearSectionAction;
- (id)_criticalOffAction;
- (id)_criticalOnAction;
- (id)_customSettingsActionForSectionSettings:(id)a0;
- (id)_deliverImmediatelyAcion;
- (BOOL)_didApplicationBreakthroughMode:(id)a0;
- (BOOL)_didBreakthroughMode:(id)a0;
- (BOOL)_didContactBreakthroughMode:(id)a0;
- (BOOL)_isApplicationAllowedForMode:(id)a0;
- (BOOL)_isCommunicationThread;
- (BOOL)_isContactAllowedForMode:(id)a0;
- (id)_muteForOneHourAction;
- (id)_muteForTodayAction;
- (id)_offActionForApplicationForMode:(id)a0;
- (id)_offActionForContactForMode:(id)a0;
- (id)_offActionWithSectionDisplayName:(id)a0;
- (id)_onActionWithSectionDisplayName:(id)a0;
- (id)_sendToDigestAction;
- (id)_settingsActionForSectionSettings:(id)a0;
- (id)_threadIdentifierOrNil;
- (id)_timeSensitiveOffAction;
- (id)_timeSensitiveOnAction;
- (id)_unmuteActionForMuteAssertionLevel:(unsigned long long)a0;
- (id)initWithNotificationRequest:(id)a0 presentingView:(id)a1 settingsDelegate:(id)a2 optionsForSection:(BOOL)a3;
- (void)presentMenu;

@end
