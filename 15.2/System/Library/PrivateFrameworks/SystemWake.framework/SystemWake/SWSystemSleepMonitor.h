@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue, SWSystemSleepAssertionProviding, SWSystemSleepMonitorProviding;

@interface SWSystemSleepMonitor : NSObject <SWSystemSleepMonitorProvidingDelegate, BSInvalidatable> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_identifier;
    id<SWSystemSleepMonitorProviding> _monitorProvider;
    id<SWSystemSleepAssertionProviding> _sleepAssertionProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_lock_observers;
    unsigned long long _lock_messageID;
    unsigned long long _state;
    BOOL _allowsInvalidation;
}

@property (readonly, getter=hasSleepBeenRequested) BOOL sleepRequested;
@property (readonly, getter=isSleepImminent) BOOL sleepImminent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorUsingMainQueue;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)systemPowerChanged:(unsigned int)a0 notificationID:(void *)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithIdentifier:(id)a0 queue:(id)a1;
- (id)initWithIdentifier:(id)a0 queue:(id)a1 allowsInvalidation:(BOOL)a2 monitorProvider:(id)a3 sleepAssertionProvider:(id)a4;

@end
