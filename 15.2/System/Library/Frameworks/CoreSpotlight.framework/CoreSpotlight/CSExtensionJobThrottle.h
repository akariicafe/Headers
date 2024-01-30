@class NSMutableDictionary;

@interface CSExtensionJobThrottle : NSObject

@property (nonatomic) unsigned long long maxRetryCount;
@property (nonatomic) unsigned long long minSecondsBetweenRetries;
@property (nonatomic) unsigned long long maxSecondsBetweenRetries;
@property (nonatomic) unsigned long long minSecondsBetweenRetriesUnderMemoryPressure;
@property (nonatomic) unsigned long long maxSecondsBetweenRetriesUnderMemoryPressure;
@property (retain, nonatomic) NSMutableDictionary *countersByBundleID;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (long long)nextDispatchTimeDeltaForExtension:(id)a0 job:(id)a1 memoryPressure:(BOOL)a2;

@end
