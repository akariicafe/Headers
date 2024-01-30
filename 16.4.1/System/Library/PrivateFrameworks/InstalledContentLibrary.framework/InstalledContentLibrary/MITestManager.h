@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MITestManager : NSObject

@property (nonatomic) unsigned long long testFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *testModeQueue;
@property (retain, nonatomic) NSMutableDictionary *sourceForPID;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)clearTestFlags:(unsigned long long)a0;
- (BOOL)_onQueue_clearIsRunningInTestModeForProcessWithPID:(int)a0 withError:(id *)a1;
- (void)_onQueue_clearTestFlags:(unsigned long long)a0;
- (BOOL)_onQueue_setIsRunningInTestModeForProcessWithPID:(int)a0 withError:(id *)a1;
- (void)_onQueue_setTestFlags:(unsigned long long)a0;
- (id)_testModeSentinelURL;
- (BOOL)clearIsRunningInTestModeForProcessWithPID:(int)a0 withError:(id *)a1;
- (BOOL)isRunningInTestMode:(BOOL *)a0 outError:(id *)a1;
- (BOOL)setIsRunningInTestModeForProcessWithPID:(int)a0 withError:(id *)a1;
- (BOOL)testFlagsAreSet:(unsigned long long)a0;

@end
