@class Protocol;
@protocol CKOperationCallbacks;

@interface CKDOperationCallbackProxy : NSObject <CKOperationCallbacks>

@property (retain, nonatomic) id<CKOperationCallbacks> clientOperationCallbackProxy;
@property (retain, nonatomic) Protocol *callbackProtocol;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithClientOperationCallbackProxy:(id)a0 callbackProtocol:(id)a1;

@end
