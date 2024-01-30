@class CACAXNotificationObserver;

@interface CACOutOfProcessPresentationManager : NSObject <CACAXNotificationObserverDelegate, CACContentViewManager>

@property (class, readonly, nonatomic) long long remoteViewType;
@property (class, readonly, nonatomic) int axNotification;

@property (retain, nonatomic) CACAXNotificationObserver *observer;

- (BOOL)isOutOfProcess;
- (void).cxx_destruct;
- (BOOL)isShowing;
- (id)init;
- (void)hide;
- (BOOL)isOverlay;
- (void)observer:(id)a0 didObserveNotification:(int)a1 notificationData:(void *)a2;
- (void)handleAXNotificationData:(void *)a0;
- (BOOL)isPhysiciallyInteractiveOverlay;
- (void)hideWithoutAnimation;
- (void)presentWithData:(id)a0;

@end
