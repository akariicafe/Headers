@class NSString, TPSRecordDataProvider, _TPSXPCConnection;

@interface TPSRecordController : NSObject <_TPSXPCExportable>

@property (retain, nonatomic) _TPSXPCConnection *xpcConnection;
@property (weak, nonatomic) TPSRecordDataProvider *dataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)connectionInvalidated;
- (id)recordQueue;
- (void)_destroyXPCConnection;
- (id)remoteInterface;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)exportedInterface;
- (void)persistRecord:(id)a0;
- (void)persistRecords:(id)a0;
- (void)persistRecordsFromTipsd:(id)a0;

@end
