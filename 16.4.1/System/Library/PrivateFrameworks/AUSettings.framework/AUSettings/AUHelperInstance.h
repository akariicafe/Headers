@class NSXPCConnection;
@protocol AUHelperServiceProtocol;

@interface AUHelperInstance : NSObject {
    NSXPCConnection *_xpcConnection;
}

@property (class, readonly) AUHelperInstance *sharedInstance;

@property (readonly) id<AUHelperServiceProtocol> remoteObject;

+ (id)xpcConnectionToHelper;

- (id)init;
- (void).cxx_destruct;

@end
