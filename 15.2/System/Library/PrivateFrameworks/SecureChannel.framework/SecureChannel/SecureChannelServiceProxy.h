@class NSObject, NSXPCConnection;
@protocol SecureChannelService;

@interface SecureChannelServiceProxy : NSObject <SecureChannelService> {
    NSXPCConnection *_connectionToService;
    NSObject<SecureChannelService> *_remoteObject;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)actionForURL:(id)a0 completion:(id /* block */)a1;
- (void)runApproverFlowForURL:(id)a0 completion:(id /* block */)a1;

@end
