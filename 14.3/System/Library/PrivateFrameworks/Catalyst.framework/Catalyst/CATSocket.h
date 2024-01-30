@class CATEndPoint, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, CATSocketDelegate;

@interface CATSocket : NSObject {
    BOOL mIsInvalid;
    int mState;
}

@property (nonatomic) int nativeSocket;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *socketSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *socketQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *userQueue;
@property (weak, nonatomic) id<CATSocketDelegate> delegate;
@property (readonly, nonatomic) CATEndPoint *localEndPoint;
@property (readonly, nonatomic) CATEndPoint *remoteEndPoint;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)delegateDidConnect;
- (void)resume;
- (void)suspend;
- (void)invalidate;
- (void)delegateDidClose;
- (void)delegateDidReceiveData:(id)a0;
- (void)socketDidCancel;
- (void)socketDidReceiveEvent;
- (void)populateLocalEndPoint;
- (void)populateRemoteEndPoint;
- (void)socketDidConnect;
- (void)socketDidFailWithError:(id)a0;
- (void)socketDidReceiveListeningEvent;
- (void)socketDidReceiveData;
- (void)acceptPendingConnection;
- (id)initWithNativeSocket:(int)a0;
- (BOOL)delegateShouldAcceptNewSocket:(id)a0;
- (void)delegateDidFailWithError:(id)a0;
- (BOOL)listenWithEndPoint:(id)a0 error:(id *)a1;
- (BOOL)connectToEndPoint:(id)a0 error:(id *)a1;

@end
