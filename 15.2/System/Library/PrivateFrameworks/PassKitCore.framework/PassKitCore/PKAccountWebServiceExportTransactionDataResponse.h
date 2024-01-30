@class NSData, NSString;

@interface PKAccountWebServiceExportTransactionDataResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSData *transactionData;
@property (readonly, copy, nonatomic) NSString *transactionDataFilename;
@property (readonly, copy, nonatomic) NSString *transactionDataHash;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
