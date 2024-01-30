@class NSMutableDictionary;

@interface RTDarwinNotificationHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *registrations;

- (void)removeObserverForNotificationName:(id)a0;
- (unsigned long long)stateForNotificationName:(id)a0;
- (void)dealloc;
- (void)postNotification:(id)a0;
- (id)init;
- (void)_handleDarwinNotificationCallback:(id)a0;
- (void)addObserverForNotificationName:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 center:(struct __CFNotificationCenter { } *)a1 key:(id)a2 callback:(void /* function */ *)a3 info:(void *)a4 suspensionBehavior:(long long)a5;
- (void)removeObserver:(id)a0 center:(struct __CFNotificationCenter { } *)a1 key:(id)a2 info:(void *)a3;

@end
