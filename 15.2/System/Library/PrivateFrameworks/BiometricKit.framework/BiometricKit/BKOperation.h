@class NSString, BiometricKitXPCClient, BKDevice, NSObject;
@protocol OS_dispatch_queue, BKOperationDelegate;

@interface BKOperation : NSObject <BiometricKitDelegateXpcProtocol> {
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

- (void)templateUpdate:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)taskResumeStatus:(int)a0 client:(unsigned long long)a1;
- (void)enrollFeedback:(id)a0 client:(unsigned long long)a1;
- (void)homeButtonPressed:(unsigned long long)a0;
- (void)statusMessage:(unsigned int)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)touchIDButtonPressed:(BOOL)a0 client:(unsigned long long)a1;
- (void)matchResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)enrollResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (void)enrollUpdate:(id)a0 client:(unsigned long long)a1;
- (BOOL)isDelegate;
- (id)initWithDevice:(id)a0;
- (BOOL)startWithError:(id *)a0;
- (void).cxx_destruct;
- (void)changeState:(long long)a0;
- (void)dealloc;
- (void)cancel;
- (id)dispatchQueue;
- (void)startWithReply:(id /* block */)a0;
- (void)startBioOperation:(BOOL)a0 reply:(id /* block */)a1;
- (void)startOperation:(BOOL)a0 reply:(id /* block */)a1;
- (void)operationEndsWithReason:(long long)a0;
- (id)optionsDictionaryWithError:(id *)a0;
- (id)userPresentWithError:(id *)a0;

@end
