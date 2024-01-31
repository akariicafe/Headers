@interface IAPUIDManager : NSObject

+ (id)sharedIAPUIDManager;

- (id)init;
- (void)dealloc;
- (unsigned long long)iapUID:(id)a0;
- (BOOL)isIAPUIDPresent:(unsigned long long)a0;
- (id)objectForIAPUID:(unsigned long long)a0;
- (BOOL)removeIAPUID:(unsigned long long)a0;

@end
