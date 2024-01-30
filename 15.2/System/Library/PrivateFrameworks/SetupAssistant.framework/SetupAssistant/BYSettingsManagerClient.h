@class NSXPCConnection;

@interface BYSettingsManagerClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)_connectToDaemon;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasStashedValuesOnDisk;

@end
