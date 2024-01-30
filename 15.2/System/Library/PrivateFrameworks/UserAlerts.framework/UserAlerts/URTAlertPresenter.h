@class NSMutableDictionary, URTUserNotificationPresentation, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface URTAlertPresenter : NSObject <URTDestinationPresentationDelegate>

@property (readonly, nonatomic) NSMutableDictionary *presentationsForDestinations;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *presentationsQueue;
@property (nonatomic) void /* function */ *compatibilityCallback;
@property (readonly, nonatomic) int compatibilityResponse;
@property (readonly, nonatomic) int compatibilityResponseButtonFlag;
@property (readonly, weak, nonatomic) URTUserNotificationPresentation *userNotificationPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_presentationQueue_removePresentation:(id)a0 forDestination:(long long)a1;
- (void)handleDefaultActionForAlertPresentation:(id)a0;
- (void)_presentationQueue_invalidate;
- (void)_addUserNotificationContents:(id)a0 flags:(unsigned long long)a1;
- (void)dismiss;
- (void)handleOtherActionForAlertPresentation:(id)a0;
- (void)_presentationQueue_dismiss;
- (void)addAlert:(id)a0 forDestination:(long long)a1;
- (void)handleCancelActionForAlertPresentation:(id)a0;
- (void).cxx_destruct;
- (void)_handleUserNotificationResponse:(unsigned long long)a0;
- (id)init;
- (void)_invokeCallbackForResponseFlags:(unsigned long long)a0;
- (void)invalidate;
- (void)_presentationQueue_invokeAction:(id)a0 forPresentation:(id)a1;
- (void)present;

@end
