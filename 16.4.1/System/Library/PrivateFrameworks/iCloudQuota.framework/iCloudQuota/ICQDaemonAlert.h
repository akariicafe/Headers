@class NSLock, ICQDaemonOffer, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ICQDaemonAlert : NSObject {
    NSLock *_alertLock;
    long long _alertState;
    struct __CFUserNotification { } *_cfAlert;
    NSObject<OS_dispatch_semaphore> *_alertSema;
    NSObject<OS_dispatch_queue> *_alertQueue;
}

@property (readonly, nonatomic) ICQDaemonOffer *daemonOffer;
@property (nonatomic) BOOL showOnlyInSpringboard;
@property (nonatomic) BOOL handleActionsBeforeCallingCompletionHandler;

+ (void)dismissAlertsWithNotificationID:(id)a0;
+ (BOOL)shouldShowForDaemonOffer:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)dismissAlert;
- (void)_handleLink:(id)a0;
- (id)initWithDaemonOffer:(id)a0;
- (BOOL)showAlertWithCompletion:(id /* block */)a0;

@end
