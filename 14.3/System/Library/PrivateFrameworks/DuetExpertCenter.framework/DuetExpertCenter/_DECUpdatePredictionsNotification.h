@interface _DECUpdatePredictionsNotification : NSObject {
    id _notificationToken;
}

+ (void)runNotificationBlockForListenerCategory:(unsigned long long)a0 notificationCategory:(unsigned long long)a1 listenConsumerType:(unsigned long long)a2 notificationConsumerType:(unsigned long long)a3 updateTimeInterval:(double)a4 currentDate:(id)a5 withCachedDateGetter:(id /* block */)a6 andUpdateBlock:(id /* block */)a7 finallyBlock:(id /* block */)a8;
+ (void)postNotificationForPredictionCategory:(unsigned long long)a0 consumerType:(unsigned long long)a1 andRefreshTimeInterval:(double)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNotificationsForPredictionCategory:(unsigned long long)a0 andConsumerType:(unsigned long long)a1 withCachedDateGetter:(id /* block */)a2 andUpdateBlock:(id /* block */)a3 finallyBlock:(id /* block */)a4;

@end
