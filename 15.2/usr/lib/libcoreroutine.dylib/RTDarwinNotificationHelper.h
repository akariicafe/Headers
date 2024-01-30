@class NSMutableDictionary;

@interface RTDarwinNotificationHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *registrations;

- (void)addObserver:(id)a0 center:(struct __CFNotificationCenter { } *)a1 key:(id)a2 callback:(void /* function */ *)a3 info:(void *)a4 suspensionBehavior:(long long)a5;
- (void)addObserverForNotificationName:(id)a0 handler:(id /* block */)a1;
- (unsigned long long)stateForNotificationName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeObserver:(id)a0 center:(struct __CFNotificationCenter { } *)a1 key:(id)a2 info:(void *)a3;
- (void)removeObserverForNotificationName:(id)a0;
- (void)_handleDarwinNotificationCallback:(id)a0;
- (void)dealloc;
- (void)postNotification:(id)a0;

@end
