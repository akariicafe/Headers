@class NSCountedSet, NSString, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface FMXPCTransactionManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *txn_ops_queue;
@property (retain, nonatomic) NSCountedSet *activeTransactions;
@property (retain, nonatomic) NSString *keepAliveActivityIdentifier;
@property (retain, nonatomic) NSObject<OS_os_transaction> *masterTransaction;

+ (id)sharedInstance;

- (void)endTransaction:(id)a0;
- (void)_disableOldKeepAliveActivity;
- (id)dumpActiveTransactions;
- (void)_disableLaunchOnRebootActivity:(id)a0;
- (void)_disableKeepAlive;
- (void)dealloc;
- (void)setLaunchOnRebootActivity:(id)a0 keepAliveActivity:(id)a1;
- (id)init;
- (void)_enableKeepAlive;
- (id)initSingleton;
- (void).cxx_destruct;
- (void)beginTransaction:(id)a0;

@end
