@interface CKDThrottle : CKThrottle

+ (void)initialize;
+ (BOOL)addThrottle:(id)a0;
+ (void)invalidateAdopterThrottles;
+ (void)throttleWillBeRemoved:(id)a0;

- (id)initWithDefaultsKey:(id)a0;
- (void)throttleDataWasChanged;
- (void)saveToDefaults;
- (void)removeDefaultsData;

@end
