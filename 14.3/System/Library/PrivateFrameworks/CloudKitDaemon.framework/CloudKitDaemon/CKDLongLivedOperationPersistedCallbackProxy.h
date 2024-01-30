@class NSString, Protocol;

@interface CKDLongLivedOperationPersistedCallbackProxy : NSObject <CKOperationCallbacks>

@property (copy, nonatomic) NSString *operationID;
@property (retain, nonatomic) Protocol *callbackProtocol;
@property (nonatomic) SEL completionSelector;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithOperationID:(id)a0 callbackProtocol:(id)a1 completionSelector:(SEL)a2;

@end
