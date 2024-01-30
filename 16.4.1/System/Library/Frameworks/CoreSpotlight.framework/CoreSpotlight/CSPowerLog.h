@class NSMutableDictionary, NSDate;

@interface CSPowerLog : NSObject

@property (retain, nonatomic) NSMutableDictionary *operationsByBundleID;
@property (retain, nonatomic) NSMutableDictionary *reasonedOperationsByBundleID;
@property (retain, nonatomic) NSDate *lastFlushDate;
@property (nonatomic) unsigned long long cachedCount;

+ (id)sharedInstance;
+ (id)keyNameForOperation:(long long)a0;

- (void)logWithBundleID:(id)a0 indexOperation:(long long)a1 itemCount:(unsigned long long)a2;
- (void)logWithBundleID:(id)a0 indexOperation:(long long)a1 itemCount:(unsigned long long)a2 reason:(id)a3;
- (void)updateDictionaryAndUnlock:(unsigned long long)a0 cacheCount:(long long)a1 keyName:(id)a2 operationDictionary:(id)a3;
- (void)flushToPowerLog_locked_and_unlock;
- (void)_addToDictionary:(long long)a0 bundleID:(id)a1 itemCount:(unsigned long long)a2 reason:(id)a3;
- (void)_addToDictionary:(long long)a0 bundleID:(id)a1 itemCount:(unsigned long long)a2;
- (id)init;
- (void)updateDictionaryAndUnlock:(unsigned long long)a0 keyName:(id)a1 operationDictionary:(id)a2;
- (void).cxx_destruct;

@end
