@class NSMutableArray, NSString, NSArray, NSNumber, NSObject;
@protocol OS_os_log, AppleFirmwareUpdateControllerDelegate, OS_dispatch_queue;

@interface AppleFirmwareUpdateController : NSObject {
    NSObject<OS_os_log> *_log;
    struct IONotificationPort { } *_iokitNotifyPort;
    NSMutableArray *_pendingCriticalEarlyBootEntriesInternal;
    id<AppleFirmwareUpdateControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSNumber *_registryEntryID;
    NSString *_fwAssetDirectory;
}

@property (retain, nonatomic) NSString *fwAssetFile;
@property (retain, nonatomic) NSString *fwAssetSignatureType;
@property (retain, nonatomic) NSNumber *fwAssetVersion;
@property (retain, nonatomic) NSNumber *fwAssetSize;
@property (retain, nonatomic) NSNumber *img4Tag;
@property (retain, nonatomic) NSArray *fdrClasses;

- (id)findFWAssetFromTag:(id)a0 tag:(unsigned int)a1 size:(unsigned long long *)a2;
- (void)earlyBootAccessoryAttachedInternal:(unsigned int)a0;
- (void)earlyBootAccessoryAttached:(unsigned int)a0;
- (void)readCriticalEarlyBootEntries;
- (BOOL)getEarlyBootList:(id)a0;
- (unsigned int)getServiceForRegistryID:(long long *)a0;
- (long long)sendFDRData:(unsigned int)a0;
- (BOOL)createFWAssetInfo;
- (void)setDelegate:(id)a0;
- (void)enableEarlyBootLoggingMode;
- (void)dealloc;
- (BOOL)createFWAssetInfoInternal;
- (BOOL)getEarlyBootListInternal:(id)a0;
- (id)updateFirmwareWithOptionsInternal:(id)a0;
- (id)getPendingEarlyBootAccessories;
- (id)updateFirmwareWithOptions:(id)a0;
- (BOOL)registerForPendingEarlyBootAccessories;
- (unsigned int)getConnectionForRegistryID:(long long *)a0;
- (BOOL)isFWDownloadNeeded:(id)a0;
- (BOOL)registerForPendingEarlyBootAccessoriesInternal;
- (void).cxx_destruct;
- (id)initWithRegistryEntryID:(id)a0 fwAssetDirectory:(id)a1;

@end
