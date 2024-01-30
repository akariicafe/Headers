@class NSXPCConnection;

@interface CLHarvester : NSObject {
    NSXPCConnection *_connection;
}

- (void)connect;
- (void)dealloc;
- (id)currentStateDictionary;
- (void)submitSample:(id)a0;

@end
