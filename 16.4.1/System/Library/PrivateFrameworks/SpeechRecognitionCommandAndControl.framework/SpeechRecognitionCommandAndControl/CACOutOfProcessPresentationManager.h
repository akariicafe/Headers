@class CACAXNotificationObserver;

@interface CACOutOfProcessPresentationManager : NSObject <CACAXNotificationObserverDelegate, CACContentViewManager>

@property (class, readonly, nonatomic) long long remoteViewType;
@property (class, readonly, nonatomic) int axNotification;

@property (retain, nonatomic) CACAXNotificationObserver *observer;

- (BOOL)isOutOfProcess;
- (BOOL)isShowing;
- (void)hide;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isOverlay;
- (void)observer:(id)a0 didObserveNotification:(int)a1 notificationData:(void *)a2;
- (BOOL)isPhysiciallyInteractiveOverlay;
- (void)handleAXNotificationData:(void *)a0;
- (void)hideWithoutAnimation;
- (void)presentWithData:(id)a0;

@end
