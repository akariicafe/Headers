@class NSString, SSXPCConnection;

@interface SSVMediaSocialShareExtension : NSObject {
    SSXPCConnection *_connection;
}

@property (readonly, copy, nonatomic) NSString *extensionIdentifier;

- (void)getVisibilityWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
