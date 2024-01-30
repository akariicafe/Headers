@interface IAPUIDManager : NSObject

+ (id)sharedIAPUIDManager;

- (id)init;
- (unsigned long long)iapUID:(id)a0;
- (void)dealloc;
- (BOOL)removeIAPUID:(unsigned long long)a0;
- (id)objectForIAPUID:(unsigned long long)a0;
- (BOOL)isIAPUIDPresent:(unsigned long long)a0;

@end
