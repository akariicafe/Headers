@class NSString, WebBookmarksXPCConnection;
@protocol WebBookmarksClientDelegateProtocol;

@interface SafariFetcherServerProxy : NSObject <WebBookmarksXPCConnectionDelegate> {
    WebBookmarksXPCConnection *_connection;
}

@property (weak, nonatomic) id<WebBookmarksClientDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearReadingListArchiveWithUUID:(id)a0;
- (void)clearAllReadingListArchives;
- (void)startReadingListFetcher;
- (id)init;
- (void).cxx_destruct;
- (void)didFinishFetching;
- (void)didUpdateProgressWithMessage:(id)a0;
- (void)didStartFetchingReadingListItemWithMessage:(id)a0;
- (void)didStopFetchingReadingListItemWithMessage:(id)a0;
- (void)connection:(id)a0 didCloseWithError:(id)a1;

@end
