@class NSHashTable;

@interface UIPencilEvent : UIEvent

@property (retain, nonatomic) NSHashTable *trackedInteractions;

- (long long)subtype;
- (void)registerInteraction:(id)a0;
- (id)collectAllActiveInteractions;
- (void)deregisterInteraction:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (void)deregisterAllInteractionsForWindow:(id)a0;
- (void)_sendEventToInteractions;
- (long long)type;

@end
