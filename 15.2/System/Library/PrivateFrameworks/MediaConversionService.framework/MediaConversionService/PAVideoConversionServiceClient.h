@class NSMutableDictionary, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PAVideoConversionServiceClient : NSObject <VideoConversionServiceClient>

@property (retain) NSXPCConnection *serviceConnection;
@property (retain) NSMutableDictionary *pendingRequestIdentifierToProgressMap;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProgress:(id)a0;
- (void)setupServiceConnection;
- (void)transitionToInvalidatedState;
- (void)extractStillImageFromVideoAtSourceURL:(id)a0 toDestinationURL:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)convertVideoAtSourceURLCollection:(id)a0 toDestinationURLCollection:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)invalidateAfterPendingRequestCompletion;
- (id)convertVideoAtSourceURL:(id)a0 toDestinationURL:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)ut_invalidateServiceConnection;
- (void)markPendingRequestAsOptionalForProgress:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)modifyRequestWithIdentifier:(id)a0 modifications:(id)a1;
- (void)handleRequestCompletionForIdentifier:(id)a0;
- (BOOL)canMarkPendingRequestAsOptionalForProgress:(id)a0;

@end
