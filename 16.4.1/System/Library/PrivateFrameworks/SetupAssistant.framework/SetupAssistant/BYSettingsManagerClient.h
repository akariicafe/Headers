@class NSXPCConnection;

@interface BYSettingsManagerClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)_connectToDaemon;
- (BOOL)hasStashedValuesOnDisk;
- (id)init;
- (void).cxx_destruct;

@end
