@class NSString, NCNotificationRequest, NCNotificationAction;
@protocol CSNotificationDispatcher;

@interface CSFullscreenNotificationViewController : CSModalViewControllerBase <CSModalViewDelegate, CSNotificationDestination> {
    NCNotificationAction *_primaryAction;
    NCNotificationAction *_secondaryAction;
    NCNotificationAction *_silenceAction;
    NCNotificationAction *_dismissAction;
}

@property (readonly, nonatomic) NCNotificationRequest *notificationRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CSNotificationDispatcher> dispatcher;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (void)updateNotificationRequest:(id)a0;
- (long long)presentationPriority;
- (void)withdrawNotificationRequest:(id)a0;
- (id)initWithNotificationRequest:(id)a0;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)isNotificationContentExtensionVisible:(id)a0;
- (void)updateNotificationSectionSettings:(id)a0 previousSectionSettings:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)isPresentingNotificationInLongLook;
- (BOOL)handleEvent:(id)a0;
- (void)updateNotificationSystemSettings:(id)a0 previousSystemSettings:(id)a1;
- (long long)presentationType;
- (void)postNotificationRequest:(id)a0;
- (void)dealloc;
- (void)aggregateBehavior:(id)a0;
- (void)notificationsLoadedForSectionIdentifier:(id)a0;
- (BOOL)dismissNotificationInLongLookAnimated:(BOOL)a0;
- (void)aggregateAppearance:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)volumeChanged:(id)a0;
- (void)_handlePrimaryAction;
- (void)_dismissFromSignificantUserInteraction;
- (void)_handleAction:(id)a0 withName:(id)a1;
- (void)_handleDismissAction;
- (void)_handleSecondaryAction;
- (void)_handleSilenceAction;
- (void)handlePrimaryActionForView:(id)a0;
- (void)handleSecondaryActionForView:(id)a0;
- (void)lockButtonPressed:(id)a0;

@end
