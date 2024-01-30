@class AVConferenceXPCClient, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AVCMoments : NSObject {
    AVConferenceXPCClient *_connection;
    NSMutableDictionary *_requests;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly, nonatomic) id delegate;
@property (readonly, nonatomic) long long streamToken;
@property (readonly, nonatomic) unsigned int capabilities;
@property (readonly, nonatomic) NSString *requesterID;
@property (readonly, nonatomic) int activeRequestCount;
@property (readonly, nonatomic) int pendingRequestCount;

- (BOOL)connect;
- (void)disconnect;
- (void)dealloc;
- (id)description;
- (void)updateCapabilities:(unsigned int)a0;
- (BOOL)avcMomentsRequestDidEndRequest:(id)a0 withError:(id *)a1;
- (BOOL)avcMomentsRequestDidRejectRequest:(id)a0 withError:(id *)a1;
- (BOOL)avcMomentsRequestDidStartRequest:(id)a0 withError:(id *)a1;
- (void)deregisterBlocksForNotifications;
- (void)didEndProcessingRequestHelperWithResult:(id)a0;
- (void)didFinishRequestHelperWithResult:(id)a0;
- (void)didStartProcessingRequestHelperWithResult:(id)a0;
- (id)initWithStreamToken:(long long)a0 requesterID:(id)a1 delegate:(id)a2 dispatchQueue:(id)a3;
- (id)newDictionaryForRequest:(id)a0;
- (id)newRequestWithMediaType:(unsigned char)a0 mode:(unsigned char)a1 requesteeID:(id)a2;
- (id)newRequestWithMediaType:(unsigned char)a0 requesteeID:(id)a1;
- (void)registerBlocksForNotifications;

@end
