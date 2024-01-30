@class NSMutableDictionary, NSXPCConnection, PFDispatchQueue, NSString;

@interface PAVideoConversionServiceClient : NSObject <VideoConversionServiceClient>

@property (retain) NSXPCConnection *serviceConnection;
@property (retain) NSMutableDictionary *pendingRequestIdentifierToProgressMap;
@property (retain) PFDispatchQueue *isolationQueue;
@property unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)markPendingRequestAsOptionalForProgress:(id)a0;
- (BOOL)canMarkPendingRequestAsOptionalForProgress:(id)a0;
- (void)invalidateAfterPendingRequestCompletion;
- (void)updateProgress:(id)a0;
- (id)convertVideoAtSourceURLCollection:(id)a0 toDestinationURLCollection:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)setupServiceConnection;
- (id)convertVideoAtSourceURL:(id)a0 toDestinationURL:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)modifyRequestWithIdentifier:(id)a0 modifications:(id)a1;
- (void)extractStillImageFromVideoAtSourceURL:(id)a0 toDestinationURL:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleRequestCompletionForIdentifier:(id)a0;
- (void)transitionToInvalidatedState;
- (void)ut_invalidateServiceConnection;

@end
