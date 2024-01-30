@class NSXPCConnection;

@interface CallDBManagerClient : CallDBManager

@property (retain) NSXPCConnection *helperConnection;
@property (retain) id syncHelperReadyNotificationRef;

- (void)handlePermanentCreated;
- (BOOL)validatePermDatabase;
- (void).cxx_destruct;
- (void)createPermanent;
- (id)tempDBLocation:(unsigned char *)a0;
- (id)permDBLocation:(unsigned char *)a0;
- (BOOL)willMoveCallsFromTempDatabase;
- (BOOL)validateTempDatabase;
- (void)moveCallsFromTempDatabase;
- (void)createTemporary;
- (void)pokeSyncHelperToInitDB;
- (void)createHelperConnection;

@end
