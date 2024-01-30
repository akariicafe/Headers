@class NSDate, PPTCollectionOperator, PPTCoreStorage, PLAccountingOperator, PLCoreStorage, NSObject, PLCoreAgent, PLCoreService;
@protocol OS_os_transaction, OS_dispatch_source;

@interface PowerlogCore : NSObject {
    NSObject<OS_dispatch_source> *_fVMPressureSource;
}

@property (retain) NSObject<OS_os_transaction> *userRequestTransaction;
@property (readonly) NSDate *launchDate;
@property (readonly) PLCoreStorage *storage;
@property (readonly) PLAccountingOperator *accounting;
@property (readonly) PLCoreAgent *agents;
@property (readonly) PLCoreService *services;
@property (readonly) PPTCoreStorage *coreStorage;
@property (readonly) PPTCollectionOperator *collection;

+ (BOOL)isDebugEnabled;
+ (void)deprecateOldFullMode;
+ (BOOL)sharedCoreStarted;
+ (BOOL)shouldSetupCore;
+ (BOOL)isAudioAccessory;
+ (BOOL)allowRun;
+ (id)sharedCore;
+ (void)setupCore;

- (void)startCore;
- (void)stopCore;
- (void)didRecieveMemoryPressureWarning;
- (void)setupForPreUnlockTelemetry;
- (void)dealloc;
- (void)startCoreForTest;
- (id)init;
- (void).cxx_destruct;

@end
