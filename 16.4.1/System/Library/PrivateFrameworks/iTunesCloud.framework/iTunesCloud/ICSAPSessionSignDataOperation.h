@class NSData;

@interface ICSAPSessionSignDataOperation : ICSAPSessionAbstractOperation

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)finishWithSAPContextPreparationError:(id)a0;
- (void)executeWithSAPContext:(id)a0;
- (void).cxx_destruct;

@end
