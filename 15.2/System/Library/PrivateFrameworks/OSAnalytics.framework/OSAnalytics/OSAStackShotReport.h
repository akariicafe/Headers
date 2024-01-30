@class NSString, NSDictionary, NSArray, NSMutableDictionary, NSMutableArray;

@interface OSAStackShotReport : OSAReport <OSAConcreteReport> {
    int _pid;
    NSString *_appName;
    NSString *_reason;
    long long *_exceptionCodes;
    unsigned int _exceptionCodeCount;
    NSDictionary *_additionalPayload;
    int _thermalNotificationCurrentLevel;
    NSArray *_thermalSensorValues;
    NSMutableDictionary *_extras;
    void *_stackshot_config;
}

@property (nonatomic) BOOL includeSyslog;
@property (readonly, nonatomic) NSMutableArray *frontmostPids;
@property (readonly, nonatomic) unsigned long long capture_absoluteTime;
@property (readonly, nonatomic) const void *ss_trace_buffer;
@property (readonly, nonatomic) unsigned int ss_trace_length;
@property (nonatomic) int jetsamLevel;
@property (nonatomic) unsigned int flags;
@property (nonatomic) BOOL dead_snapshot;
@property (nonatomic) unsigned int ss_sequence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isActionable;
- (void)generateLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (void)decodeKCDataWithBlock:(id /* block */)a0 withTuning:(id)a1 usingCatalog:(id)a2;
- (id)resampleUUIDsForTask:(int)a0 usingCatalog:(id)a1;
- (id)problemType;
- (id)getStackshotData;
- (void)setIncidentID:(id)a0;
- (int)resampleTruncatedBacktracesForTask:(int)a0 forThreads:(id)a1 usingCatalog:(id)a2 in:(id)a3;
- (void).cxx_destruct;
- (void)queryThermalData;
- (id)appleCareDetails;
- (void)addNotes:(id)a0;
- (void)setReason:(id)a0;
- (void)useStackshotBuffer:(const void *)a0 size:(unsigned int)a1 frontmostPids:(id)a2 atTime:(double)a3 machTime:(unsigned long long)a4 sequence:(unsigned int)a5;
- (id)getVMStatistics;
- (id)initWithName:(id)a0 reason:(id)a1 exceptionCode:(long long *)a2 exceptionCodeCount:(unsigned int)a3;
- (void)setAdditionalPayload:(id)a0;
- (void)acquireStackshot;
- (void)addCustomField:(const char *)a0 value:(id)a1 into:(id)a2;
- (void)useStackshotData:(id)a0 frontmostPids:(id)a1 atTime:(double)a2 machTime:(unsigned long long)a3 sequence:(unsigned int)a4;
- (id)reportNamePrefix;
- (void)dealloc;
- (id)initForPid:(int)a0 process:(id)a1 withReason:(id)a2 exceptionCode:(long long *)a3 exceptionCodeCount:(unsigned int)a4 stackshotFlags:(unsigned int)a5;
- (id)exceptionCodesDescription;
- (id)getExtraData:(id)a0;

@end
