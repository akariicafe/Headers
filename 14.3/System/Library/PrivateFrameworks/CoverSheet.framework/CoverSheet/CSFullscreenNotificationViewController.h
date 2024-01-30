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

- (void)postNotificationRequest:(id)a0;
- (void)updateNotificationRequest:(id)a0;
- (void)notificationsLoadedForSectionIdentifier:(id)a0;
- (void)withdrawNotificationRequest:(id)a0;
- (BOOL)dismissNotificationInLongLookAnimated:(BOOL)a0;
- (void)updateNotificationSectionSettings:(id)a0 previousSectionSettings:(id)a1;
- (long long)presentationPriority;
- (BOOL)isPresentingNotificationInLongLook;
- (BOOL)isNotificationContentExtensionVisible:(id)a0;
- (void)aggregateBehavior:(id)a0;
- (long long)presentationType;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)volumeChanged:(id)a0;
- (id)initWithNotificationRequest:(id)a0;
- (void)handlePrimaryActionForView:(id)a0;
- (void)handleSecondaryActionForView:(id)a0;
- (void)lockButtonPressed:(id)a0;
- (void)_handleAction:(id)a0 withName:(id)a1;
- (void)_dismissFromSignificantUserInteraction;
- (void)_handleSilenceAction;
- (void)_handlePrimaryAction;
- (void)_handleDismissAction;
- (void)_handleSecondaryAction;

@end
