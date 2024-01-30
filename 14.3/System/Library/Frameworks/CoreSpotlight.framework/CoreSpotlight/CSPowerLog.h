@class NSMutableDictionary, NSDate;

@interface CSPowerLog : NSObject

@property (retain, nonatomic) NSMutableDictionary *operationsByBundleID;
@property (retain, nonatomic) NSDate *lastFlushDate;
@property (nonatomic) unsigned long long cachedCount;

+ (id)sharedInstance;
+ (id)keyNameForOperation:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_addToDictionary:(long long)a0 bundleID:(id)a1 itemCount:(unsigned long long)a2;
- (void)flushToPowerLog;
- (void)logWithBundleID:(id)a0 indexOperation:(long long)a1 itemCount:(unsigned long long)a2;

@end
