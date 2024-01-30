@class NSString, NSDictionary, CRKIDSMessageOptions, CATOperation;
@protocol CRKIDSReadinessEvaluating, CRKIDSLocalPrimitives;

@interface CRKIDSWaitAndSendIDSMessageOperation : CATOperation

@property (readonly, nonatomic) id<CRKIDSLocalPrimitives> IDSLocalPrimitives;
@property (readonly, nonatomic) id<CRKIDSReadinessEvaluating> readinessEvaluator;
@property (readonly, copy, nonatomic) NSDictionary *message;
@property (readonly, copy, nonatomic) NSString *destinationAddress;
@property (readonly, copy, nonatomic) NSString *sourceAppleID;
@property (readonly, nonatomic) CRKIDSMessageOptions *options;
@property (retain, nonatomic) CATOperation *evaluateReadinessOperation;
@property (retain, nonatomic) CATOperation *sendMessageOperation;

- (void)run;
- (void)main;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)sendMessage;
- (void)evaluateReadinessOperationDidFinish:(id)a0;
- (id)initWithIDSLocalPrimitives:(id)a0 IDSReadinessEvaluator:(id)a1 message:(id)a2 destinationAddress:(id)a3 sourceAppleID:(id)a4 options:(id)a5;
- (void)sendMessageOperationDidFinish:(id)a0;

@end
