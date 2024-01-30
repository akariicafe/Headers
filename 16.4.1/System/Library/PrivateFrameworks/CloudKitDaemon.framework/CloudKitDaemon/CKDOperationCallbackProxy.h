@class Protocol;
@protocol CKOperationCallbacks;

@interface CKDOperationCallbackProxy : NSObject <CKOperationCallbacks>

@property (retain, nonatomic) id<CKOperationCallbacks> clientOperationCallbackProxy;
@property (retain, nonatomic) Protocol *callbackProtocol;

- (id)initWithClientOperationCallbackProxy:(id)a0 callbackProtocol:(id)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
