@class NSXPCConnection;

@interface CLKWatchFaceLibraryServer : NSObject <CLKWatchFaceLibraryServerInterface> {
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;

- (void)_clearConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_queue_setupConnectionIfNeeded;
- (void)openWatchFaceURLWithBookmarkData:(id)a0 sourceApplicationBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)validateFaceType:(id)a0 faceBundleId:(id)a1 completionHandler:(id /* block */)a2;

@end
