@class NSString, CUFileServer, RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue;

@interface SNFileServer : NSObject {
    CUFileServer *_server;
    NSObject<OS_dispatch_queue> *_queue;
    RPCompanionLinkClient *_link;
    NSString *_rootDirectory;
}

- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithRootDirectory:(id)a0;

@end
