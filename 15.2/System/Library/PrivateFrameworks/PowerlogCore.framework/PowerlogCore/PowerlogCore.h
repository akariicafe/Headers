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
+ (BOOL)shouldSetupCore;
+ (void)setupCore;
+ (BOOL)isAudioAccessory;
+ (id)sharedCore;
+ (BOOL)allowRun;
+ (BOOL)sharedCoreStarted;
+ (void)deprecateOldFullMode;

- (void)didRecieveMemoryPressureWarning;
- (void)stopCore;
- (void)startCoreForTest;
- (void).cxx_destruct;
- (id)init;
- (void)startCore;
- (void)dealloc;

@end
