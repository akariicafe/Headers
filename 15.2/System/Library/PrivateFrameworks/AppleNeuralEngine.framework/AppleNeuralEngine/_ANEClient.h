@class _ANEDaemonConnection, NSArray;

@interface _ANEClient : NSObject

@property (readonly, nonatomic) _ANEDaemonConnection *conn;
@property (readonly, nonatomic) NSArray *priorityQ;

+ (void)initialize;
+ (id)sharedConnection;
+ (id)new;
+ (id)sharedPrivateConnection;

- (BOOL)loadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)unloadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)echo:(id)a0;
- (void).cxx_destruct;
- (void)purgeCompiledModel:(id)a0;
- (BOOL)compiledModelExistsFor:(id)a0;
- (id)init;
- (BOOL)evaluateWithModel:(id)a0 options:(id)a1 request:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)evaluateRealTimeWithModel:(id)a0 options:(id)a1 request:(id)a2 error:(id *)a3;
- (BOOL)loadRealTimeModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)unloadRealTimeModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (void)dealloc;
- (BOOL)compileModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)compiledModelExistsMatchingHash:(id)a0;
- (void)purgeCompiledModelMatchingHash:(id)a0;
- (id)initWithRestrictedAccessAllowed:(BOOL)a0;
- (BOOL)doLoadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)doEvaluateDirectWithModel:(id)a0 options:(id)a1 request:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)doUnloadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)beginRealTimeTask;
- (BOOL)endRealTimeTask;

@end
