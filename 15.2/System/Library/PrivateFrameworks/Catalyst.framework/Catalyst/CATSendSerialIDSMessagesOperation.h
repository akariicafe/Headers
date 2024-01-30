@class CATIDSMessageOptions, NSArray, NSString, NSObject;
@protocol OS_dispatch_queue, CATIDSPrimitives;

@interface CATSendSerialIDSMessagesOperation : CATOperation {
    id<CATIDSPrimitives> mPrimitives;
    NSObject<OS_dispatch_queue> *mWorkQueue;
    NSArray *mMessages;
    NSString *mDestinationAddress;
    NSString *mSourceAppleID;
    CATIDSMessageOptions *mOptions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } mLock;
}

- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (id)initWithIDSPrimitives:(id)a0 workQueue:(id)a1 messages:(id)a2 destinationAddress:(id)a3 sourceAppleID:(id)a4 options:(id)a5;
- (void)sendMessages;
- (void)didSendMessagesWithError:(id)a0;

@end
