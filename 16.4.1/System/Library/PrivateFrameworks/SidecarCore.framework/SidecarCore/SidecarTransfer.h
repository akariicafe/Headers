@class SidecarSession;
@protocol SidecarTransferDelegate;

@interface SidecarTransfer : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    SidecarSession *_session;
    _Atomic int _suspendCount;
}

@property (weak, nonatomic) id<SidecarTransferDelegate> delegate;
@property (readonly, nonatomic) long long requestID;
@property (readonly, nonatomic) SidecarSession *session;
@property (readonly, nonatomic) long long transferID;

- (void).cxx_destruct;
- (id /* block */)_resumeMessage:(id)a0;
- (id)dataForType:(id)a0;
- (id)initWithSession:(id)a0 requestID:(long long)a1 transferID:(long long)a2;

@end
