@class NSString, NSMutableDictionary, NSSet;

@interface DataStallHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {
    NSMutableDictionary *_store;
    id _triggerDisconnectObserver;
    id _primaryObserver;
    BOOL _gateOpen;
    BOOL _forceNoGate;
    long long _primaryInterfaceType;
    NSSet *awdDirectSymptoms;
    NSMutableDictionary *awdDirectHistory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;
+ (unsigned long long)uniqForegroundCountForInterfaceType:(long long)a0 stallType:(unsigned long long)a1;

- (BOOL)noteSymptom:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (int)configureInstance:(id)a0;
- (void)_cleanupAwdDirectHistory;
- (void)dealloc;
- (void)_pruneStaleEndpointsFor:(id)a0 onInterfaceType:(long long)a1 stallType:(unsigned long long)a2;
- (BOOL)_getAWDDirectDampeningStatus:(int *)a0 posted:(int *)a1 forProcess:(id)a2 withTimeStamp:(double)a3;
- (unsigned long long)_uniqForegroundCountForInterfaceType:(long long)a0 stallType:(unsigned long long)a1;
- (void)_reset:(id)a0 interfaceType:(long long)a1 stallType:(unsigned long long)a2;
- (void)_checkDampeningAndPostAWDDirectMetric:(id)a0 symptomName:(id)a1 foregroundState:(BOOL)a2 timeStamp:(double)a3 signature:(id)a4;
- (void)processStall:(id)a0 procName:(id)a1 endpoint:(id)a2 foreground:(id)a3 interfaceType:(long long)a4 stallType:(unsigned long long)a5;

@end
