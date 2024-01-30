@class NSObject;
@protocol OS_dispatch_queue;

@interface NMSSHLogger : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property (copy, nonatomic) id /* block */ logBlock;
@property (nonatomic) unsigned long long logLevel;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)logger;
+ (id)sharedLogger;

- (void)logError:(id)a0;
- (void).cxx_destruct;
- (void)logInfo:(id)a0;
- (void)log:(id)a0 level:(unsigned long long)a1 flag:(unsigned long long)a2;
- (void)logVerbose:(id)a0;
- (void)logWarn:(id)a0;

@end
