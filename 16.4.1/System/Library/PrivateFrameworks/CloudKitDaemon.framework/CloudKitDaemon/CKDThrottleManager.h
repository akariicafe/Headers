@class CKDThrottleTableGroup, CKThrottleTable, CKDLogicalDeviceContext;

@interface CKDThrottleManager : CKThrottleManager {
    CKDThrottleTableGroup *_throttleTableGroup;
    CKThrottleTable *_throttleTable;
}

@property (readonly, weak, nonatomic) CKDLogicalDeviceContext *deviceContext;

+ (id)_expirationDateForTTLSeconds:(unsigned int)a0;
+ (id)throttleFromPThrottlingConfig:(id)a0;
+ (id)throttleFromServerJSONDictionary:(id)a0;

- (BOOL)addThrottle:(id)a0;
- (void)throttleWillBeRemoved:(id)a0;
- (void)loadThrottlesFromDatabase;
- (id)initWithDeviceContext:(id)a0;
- (void)noteDataChangeForThrottle:(id)a0;
- (id)throttleTable:(BOOL)a0;
- (void)throttleWasAdded:(id)a0;
- (void)throttleListBecameEmpty;
- (void).cxx_destruct;
- (void)invalidateAdopterThrottles;

@end
