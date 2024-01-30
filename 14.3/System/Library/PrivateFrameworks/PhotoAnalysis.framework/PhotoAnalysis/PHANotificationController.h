@class PGManager;

@interface PHANotificationController : NSObject {
    PGManager *_graphManager;
}

- (void).cxx_destruct;
- (id)initWithGraphManager:(id)a0;
- (void)fireNotificationForSuggestionIdentifiers:(id)a0;
- (void)postNotificationForMemory:(id)a0 withCreationReason:(unsigned long long)a1 forceImmediateDelivery:(BOOL)a2;
- (void)fireNotificationForMemoryIdentifiers:(id)a0 withCreationReason:(unsigned long long)a1;
- (BOOL)shouldFireNotificationForMemories:(id)a0 withCreationReason:(unsigned long long)a1;
- (BOOL)userIsActivelyUsingPhotos;
- (id)bestDateForDeliveringNotification;
- (void)postNotificationForSuggestion:(id)a0 deliveryDate:(id)a1;

@end
