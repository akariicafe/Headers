@class NSXPCConnection;

@interface GEORecentLocations : NSObject {
    NSXPCConnection *_connection;
}

- (void)requestRecentLocationsWithResponse:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
