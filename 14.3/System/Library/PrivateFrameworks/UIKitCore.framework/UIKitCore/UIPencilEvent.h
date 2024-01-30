@class NSHashTable;

@interface UIPencilEvent : UIEvent

@property (retain, nonatomic) NSHashTable *trackedInteractions;

- (long long)subtype;
- (void)deregisterAllInteractionsForWindow:(id)a0;
- (void).cxx_destruct;
- (id)collectAllActiveInteractions;
- (long long)type;
- (id)_init;
- (void)_sendEventToInteractions;
- (void)registerInteraction:(id)a0;
- (void)deregisterInteraction:(id)a0;

@end
