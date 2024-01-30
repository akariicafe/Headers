@class NSXPCConnection;

@interface CLHarvester : NSObject {
    NSXPCConnection *_connection;
}

- (void)connect;
- (void)dealloc;
- (void)submitSample:(id)a0;
- (id)currentStateDictionary;

@end
