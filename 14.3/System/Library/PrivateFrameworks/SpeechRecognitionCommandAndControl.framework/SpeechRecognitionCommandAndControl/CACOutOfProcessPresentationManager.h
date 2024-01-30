@class CACAXNotificationObserver;

@interface CACOutOfProcessPresentationManager : NSObject <CACAXNotificationObserverDelegate, CACContentViewManager>

@property (class, readonly, nonatomic) long long remoteViewType;
@property (class, readonly, nonatomic) int axNotification;

@property (retain, nonatomic) CACAXNotificationObserver *observer;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isOverlay;
- (BOOL)isOutOfProcess;
- (BOOL)isShowing;
- (void)hide;
- (void)handleAXNotificationData:(void *)a0;
- (BOOL)isPhysiciallyInteractiveOverlay;
- (void)hideWithoutAnimation;
- (void)observer:(id)a0 didObserveNotification:(int)a1 notificationData:(void *)a2;
- (void)presentWithData:(id)a0;

@end
