@class NSXPCConnection;

@interface CallDBManagerClient : CallDBManager

@property (retain) NSXPCConnection *helperConnection;
@property (retain) id syncHelperReadyNotificationRef;

- (void)createTemporary;
- (void)pokeSyncHelperToInitDB;
- (BOOL)willMoveCallsFromTempDatabase;
- (id)tempDBLocation:(unsigned char *)a0;
- (BOOL)validateTempDatabase;
- (void)createHelperConnection;
- (void)moveCallsFromTempDatabase;
- (void)createPermanent;
- (id)permDBLocation:(unsigned char *)a0;
- (void)handlePermanentCreated;
- (BOOL)validatePermDatabase;
- (void).cxx_destruct;

@end
