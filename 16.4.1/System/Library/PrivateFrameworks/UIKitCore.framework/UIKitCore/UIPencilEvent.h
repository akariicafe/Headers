@class NSHashTable;

@interface UIPencilEvent : UIEvent

@property (retain, nonatomic) NSHashTable *trackedInteractions;

- (long long)subtype;
- (long long)type;
- (id)_init;
- (void)deregisterInteraction:(id)a0;
- (void)deregisterAllInteractionsForWindow:(id)a0;
- (id)collectAllActiveInteractions;
- (void)registerInteraction:(id)a0;
- (void).cxx_destruct;
- (void)_sendEventToInteractions;

@end
