@class NSDictionary, CATOperationQueue;
@protocol CRKRequestPerformingProtocol;

@interface CRKRequestPerformerBackedIDSPrimitives : NSObject <CRKIDSPrimitives>

@property (readonly, nonatomic) id<CRKRequestPerformingProtocol> requestPerformer;
@property (readonly, nonatomic) CATOperationQueue *operationQueue;
@property (readonly, copy, nonatomic) NSDictionary *debugInfo;

- (void).cxx_destruct;
- (void)sendMessage:(id)a0 destinationAddress:(id)a1 sourceAppleID:(id)a2 completion:(id /* block */)a3;
- (void)listenForMessagesWithHandler:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithRequestPerformer:(id)a0 operationQueue:(id)a1;

@end
