@class NSString, CUFileServer, RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue;

@interface SNFileServer : NSObject

@property (retain, nonatomic) CUFileServer *server;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RPCompanionLinkClient *link;
@property (retain, nonatomic) NSString *rootDirectory;

+ (id)createDefaultServer;

- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithRootDirectory:(id)a0;

@end
