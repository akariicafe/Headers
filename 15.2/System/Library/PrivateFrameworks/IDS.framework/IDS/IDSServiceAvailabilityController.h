@class NSMutableDictionary;

@interface IDSServiceAvailabilityController : NSObject {
    NSMutableDictionary *_availabilityHandlers;
}

+ (id)sharedInstance;

- (BOOL)addListenerID:(id)a0 forService:(id)a1;
- (void)_stopListeningToMonitor:(id)a0;
- (void)_startListeningToMonitor:(id)a0;
- (BOOL)removeListenerID:(id)a0 forService:(id)a1;
- (BOOL)_isValidServiceType:(id)a0;
- (BOOL)hasListenerID:(id)a0 forService:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (long long)availabilityForListenerID:(id)a0 forService:(id)a1;
- (id)containerForService:(id)a0 create:(BOOL)a1;
- (void)_handleServiceMonitorNotification:(id)a0;
- (void)dealloc;
- (void)_postNotificationForService:(id)a0 availability:(long long)a1;

@end
