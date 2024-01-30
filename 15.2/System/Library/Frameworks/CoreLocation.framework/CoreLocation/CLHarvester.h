@class NSXPCConnection;

@interface CLHarvester : NSObject {
    NSXPCConnection *_connection;
}

- (void)connect;
- (void)submitSample:(id)a0;
- (id)currentStateDictionary;
- (void)dealloc;

@end
