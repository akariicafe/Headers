@class BLUIHostServiceNonUI, BLRequest, BLDownloadQueue;
@protocol BLDownloadQueueUIManagerProtocol;

@interface BLUIHostServiceProxy : NSObject <BLUIHostServiceProtocol>

@property (readonly, weak) BLDownloadQueue *downloadQueue;
@property (readonly) BLUIHostServiceNonUI *fallback;
@property (readonly, weak) BLRequest *request;
@property (readonly, weak) id<BLDownloadQueueUIManagerProtocol> uiManagerDelegate;

- (void).cxx_destruct;
- (id)_topMostViewController;
- (void)handleAuthenticateRequest:(id)a0 withReply:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 withReply:(id /* block */)a1;
- (void)handleEngagementRequest:(id)a0 withReply:(id /* block */)a1;
- (id)initWithUIManager:(id)a0 forRequest:(id)a1 inDownloadQueue:(id)a2;

@end
