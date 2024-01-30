@class NSString, SSXPCConnection;

@interface SSVMediaSocialShareExtension : NSObject {
    SSXPCConnection *_connection;
}

@property (readonly, copy, nonatomic) NSString *extensionIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)getVisibilityWithCompletionBlock:(id /* block */)a0;

@end
