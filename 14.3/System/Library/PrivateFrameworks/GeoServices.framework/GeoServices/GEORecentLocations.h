@class NSXPCConnection;

@interface GEORecentLocations : NSObject {
    NSXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)requestRecentLocationsWithResponse:(id /* block */)a0;

@end
