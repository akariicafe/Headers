@class NSXPCConnection;

@interface CallDBManagerClient : CallDBManager

@property (retain) NSXPCConnection *helperConnection;
@property (retain) id syncHelperReadyNotificationRef;

- (void)createPermanent;
- (void)createHelperConnection;
- (void)handlePermanentCreated;
- (void)createTemporary;
- (id)permDBLocation:(unsigned char *)a0;
- (BOOL)willMoveCallsFromTempDatabase;
- (BOOL)validateTempDatabase;
- (void).cxx_destruct;
- (void)moveCallsFromTempDatabase;
- (void)pokeSyncHelperToInitDB;
- (id)tempDBLocation:(unsigned char *)a0;
- (BOOL)validatePermDatabase;

@end
