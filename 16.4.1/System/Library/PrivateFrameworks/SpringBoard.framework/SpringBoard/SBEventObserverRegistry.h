@class NSMutableDictionary;

@interface SBEventObserverRegistry : NSObject {
    void *_provider;
    NSMutableDictionary *_observers;
}

+ (id)sharedInstance;

- (void)removeObserverWithToken:(unsigned long long)a0 forEvent:(id)a1;
- (void)handleEvent:(id)a0 token:(unsigned long long)a1 action:(long long)a2;
- (void)postEventToInterestedObservers:(struct __CFString { } *)a0;
- (void)setValue:(BOOL)a0 forState:(struct __CFString { } *)a1;
- (void)addObserverWithToken:(unsigned long long)a0 forEvent:(id)a1;
- (void).cxx_destruct;

@end
