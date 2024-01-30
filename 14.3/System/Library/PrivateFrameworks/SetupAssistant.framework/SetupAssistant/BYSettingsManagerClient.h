@class NSXPCConnection;

@interface BYSettingsManagerClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)_connectToDaemon;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasStashedValuesOnDisk;

@end
