@class NSString, BiometricKitXPCClient, BKDevice, NSObject;
@protocol OS_dispatch_queue, BKOperationDelegate;

@interface BKOperation : NSObject <BiometricKitXPCClientDelegate, BiometricKitDelegateXpcProtocol> {
    BiometricKitXPCClient *_xpcClient;
    BOOL _startPending;
    BOOL _cancelPending;
}

@property (readonly, nonatomic) BKDevice *device;
@property (weak, nonatomic) id<BKOperationDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionInterrupted;
- (id)initWithDevice:(id)a0;
- (BOOL)startWithError:(id *)a0;
- (void)templateUpdate:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)homeButtonPressed:(unsigned long long)a0;
- (BOOL)isDelegate;
- (void)enrollFeedback:(id)a0 client:(unsigned long long)a1;
- (void)startBioOperation:(BOOL)a0 reply:(id /* block */)a1;
- (id)dispatchQueue;
- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (void)cancel;
- (void)dealloc;
- (void)taskResumeStatus:(int)a0 client:(unsigned long long)a1;
- (id)optionsDictionaryWithError:(id *)a0;
- (void)enrollResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)statusMessage:(unsigned int)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)enrollUpdate:(id)a0 client:(unsigned long long)a1;
- (void)changeState:(long long)a0;
- (void)startWithReply:(id /* block */)a0;
- (void)touchIDButtonPressed:(BOOL)a0 client:(unsigned long long)a1;
- (void)matchResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)operationEndsWithReason:(long long)a0;
- (void)operationInterrupted;
- (void)startOperation:(BOOL)a0 reply:(id /* block */)a1;
- (id)userPresentWithError:(id *)a0;

@end
