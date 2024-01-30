@class NSMutableDictionary;

@interface RTDarwinNotificationHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *registrations;

- (void)_handleDarwinNotificationCallback:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserverForNotificationName:(id)a0;
- (void)dealloc;
- (void)addObserverForNotificationName:(id)a0 handler:(id /* block */)a1;
- (void)addObserver:(id)a0 center:(struct __CFNotificationCenter { } *)a1 key:(id)a2 callback:(void /* function */ *)a3 info:(void *)a4 suspensionBehavior:(long long)a5;
- (unsigned long long)stateForNotificationName:(id)a0;
- (void)postNotification:(id)a0;
- (void)removeObserver:(id)a0 center:(struct __CFNotificationCenter { } *)a1 key:(id)a2 info:(void *)a3;

@end
