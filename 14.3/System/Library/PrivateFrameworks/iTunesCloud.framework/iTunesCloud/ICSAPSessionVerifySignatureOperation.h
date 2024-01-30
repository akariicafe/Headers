@class NSData, NSMutableData;

@interface ICSAPSessionVerifySignatureOperation : ICSAPSessionAbstractOperation

@property (copy, nonatomic) NSData *signatureData;
@property (retain, nonatomic) NSMutableData *data;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)finishWithSAPContextPreparationError:(id)a0;
- (void).cxx_destruct;
- (void)executeWithSAPContext:(id)a0;

@end
