@class NSString, TPSRecordDataProvider, _TPSXPCConnection;

@interface TPSRecordController : NSObject <_TPSXPCExportable>

@property (retain, nonatomic) _TPSXPCConnection *xpcConnection;
@property (weak, nonatomic) TPSRecordDataProvider *dataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)remoteInterface;
- (void)_destroyXPCConnection;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void).cxx_destruct;
- (void)persistRecords:(id)a0;
- (void)persistRecord:(id)a0;
- (void)persistRecordsFromTipsd:(id)a0;
- (id)recordQueue;

@end
