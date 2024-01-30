@class NSString, CKDOperationInfoCache, Protocol;

@interface CKDLongLivedOperationPersistedCallbackProxy : NSObject <CKOperationCallbacks>

@property (copy, nonatomic) NSString *operationID;
@property (retain, nonatomic) Protocol *callbackProtocol;
@property (nonatomic) SEL completionSelector;
@property (retain, nonatomic) CKDOperationInfoCache *operationInfoCache;

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)initWithOperationID:(id)a0 callbackProtocol:(id)a1 completionSelector:(SEL)a2 operationInfoCache:(id)a3;

@end
