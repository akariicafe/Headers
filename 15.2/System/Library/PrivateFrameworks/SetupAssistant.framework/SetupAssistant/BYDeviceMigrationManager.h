@class NSHashTable, NSError, MBDeviceTransferTask, BKSProcessAssertion, MBDeviceTransferProgress, MBDeviceTransferConnectionInfo, NSObject, RPFileTransferSession;
@protocol OS_dispatch_queue, OS_voucher;

@interface BYDeviceMigrationManager : NSObject

@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isMigrating) BOOL migrating;
@property (retain, nonatomic) RPFileTransferSession *fileTransferSession;
@property (retain, nonatomic) MBDeviceTransferTask *deviceTransferTask;
@property (retain, nonatomic) BKSProcessAssertion *processAssertion;
@property (nonatomic) struct __MKBAssertion { } *deviceLockAssertion;
@property (nonatomic) int passcodeChangeNotificationToken;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) MBDeviceTransferConnectionInfo *connectionInfo;
@property (retain, nonatomic) MBDeviceTransferProgress *progressInfo;
@property (nonatomic) unsigned long long bytesTransferred;
@property (nonatomic) unsigned long long filesTransferred;
@property (nonatomic) double durationOfTransfer;
@property (nonatomic) double durationOfRestore;
@property (nonatomic) long long cancellationCause;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *migrationQueue;
@property (retain, nonatomic) NSObject<OS_voucher> *clientVoucher;
@property (nonatomic) BOOL willMigrate;

+ (id)createDeviceTransferTask:(id)a0;

- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)didCancel;
- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)takeAssertions;
- (void)didCompleteWithError:(id)a0;
- (void)releaseAssertions;
- (void)startDeviceTransferTask;
- (void)cancelDeviceTransferTask;
- (BOOL)requiresProcessAssertion;
- (struct __MKBAssertion { } *)acquireDeviceLockAssertion;
- (void)_reacquireDeviceLockAssertion;
- (BOOL)_hasAssertions;
- (id)initWithFileTranferSession:(id)a0;
- (void)cancelWithCause:(long long)a0;
- (void)restartDeviceTransferTask:(id)a0;

@end
