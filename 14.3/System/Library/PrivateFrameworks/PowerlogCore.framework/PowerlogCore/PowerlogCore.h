@class NSObject, PLAccountingOperator, PLCoreStorage, NSDate, PLCoreAgent, PLCoreService;
@protocol OS_dispatch_source;

@interface PowerlogCore : NSObject {
    NSObject<OS_dispatch_source> *_fVMPressureSource;
}

@property (readonly) NSDate *launchDate;
@property (readonly) PLCoreStorage *storage;
@property (readonly) PLAccountingOperator *accounting;
@property (readonly) PLCoreAgent *agents;
@property (readonly) PLCoreService *services;

+ (void)setupCore;
+ (BOOL)isDebugEnabled;
+ (id)sharedCore;
+ (BOOL)allowRun;
+ (BOOL)sharedCoreStarted;
+ (BOOL)shouldSetupCore;
+ (BOOL)isAudioAccessory;
+ (void)deprecateOldFullMode;

- (void)startCore;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didRecieveMemoryPressureWarning;
- (void)stopCore;

@end
