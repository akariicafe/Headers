@class NSString, _TPSXPCConnection;

@interface TPSRecordDaemonController : NSObject <_TPSXPCExportable>

@property (retain, nonatomic) _TPSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionInvalidated;
- (void)_destroyXPCConnection;
- (id)remoteInterface;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)exportedInterface;

@end
