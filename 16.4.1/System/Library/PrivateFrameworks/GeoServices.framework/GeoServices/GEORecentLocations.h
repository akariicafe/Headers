@class NSXPCConnection;

@interface GEORecentLocations : NSObject {
    NSXPCConnection *_connection;
}

- (void)requestRecentLocationsWithResponse:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
