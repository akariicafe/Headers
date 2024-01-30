@class NSDictionary, CATOperationQueue;
@protocol CRKIDSLocalPrimitives;

@interface CRKLocalBackedIDSPrimitives : NSObject <CRKIDSPrimitives>

@property (readonly, nonatomic) id<CRKIDSLocalPrimitives> IDSLocalPrimitives;
@property (readonly, nonatomic) CATOperationQueue *operationQueue;
@property (readonly, copy, nonatomic) NSDictionary *debugInfo;

- (void).cxx_destruct;
- (void)sendMessage:(id)a0 destinationAddress:(id)a1 sourceAppleID:(id)a2 completion:(id /* block */)a3;
- (void)listenForMessagesWithHandler:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithIDSLocalPrimitives:(id)a0 operationQueue:(id)a1;
- (id)operationDebugInfo;
- (id)initWithIDSLocalPrimitives:(id)a0;

@end
