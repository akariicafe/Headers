@class UIColor, NSObject;
@protocol OS_dispatch_queue, _UNNotificationContentExtensionHostContextDelegate;

@interface _UNNotificationContentExtensionHostContext : NSExtensionContext <_UNNotificationExtensionHostInterface, _UNNotificationExtensionVendorInterface>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, getter=isDelegateQueueSuspended) BOOL delegateQueueSuspended;
@property (nonatomic) BOOL wantsToBecomeFirstResponder;
@property (nonatomic) BOOL wantsToReceiveActionResponses;
@property (nonatomic) unsigned long long playPauseMediaButtonType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playPauseMediaButtonFrame;
@property (retain, nonatomic) UIColor *playPauseMediaButtonColor;
@property (weak, nonatomic) id<_UNNotificationContentExtensionHostContextDelegate> delegate;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)didReceiveNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_extensionRequestsDismiss;
- (void)mediaPause;
- (void)didReceiveNotificationResponse:(id)a0 completionHandler:(id /* block */)a1;
- (void)mediaPlay;
- (void)preserveInputViews;
- (void)restoreInputViews;
- (void)didReceiveNotificationResponse:(id)a0;
- (void)_extensionWantsToReceiveActionResponses:(BOOL)a0;
- (void)_extensionWantsToBecomeFirstResponder:(BOOL)a0;
- (void)_extensionDidCompleteNotificationResponse:(id)a0 withOption:(unsigned long long)a1;
- (void)_extensionSetPlayPauseMediaButtonType:(unsigned long long)a0;
- (void)_extensionSetPlayPauseMediaButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_extensionSetPlayPauseMediaButtonColor:(id)a0;
- (void)_extensionMediaPlayingStarted;
- (void)_extensionMediaPlayingPaused;
- (void)_extensionDidUpdatePlayPauseMediaButton;
- (void)_extensionRequestsDefaultAction;
- (void)_extensionDidUpdateTitle:(id)a0;
- (void)_extensionDidUpdateNotificationActions:(id)a0;
- (void)_hostDidReceiveNotification:(id)a0;
- (void)_hostDidReceiveNotificationResponse:(id)a0;
- (void)_hostDidReceiveNotificationResponse:(id)a0 completionHandler:(id /* block */)a1;
- (void)_hostWantsMediaToPlay;
- (void)_hostWantsMediaToPause;
- (void)_hostWantsToUpdateMediaPlayPauseButton;
- (void)_hostWantsToPreserveInputViews;
- (void)_hostWantsToRestoreInputViews;
- (void)updateMediaPlayPauseButton;
- (void)_resumeDelegateQueueIfNecessary;

@end
