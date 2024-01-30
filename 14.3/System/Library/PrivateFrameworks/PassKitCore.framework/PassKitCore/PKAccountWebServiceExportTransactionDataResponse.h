@class NSData, NSString;

@interface PKAccountWebServiceExportTransactionDataResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSData *transactionData;
@property (readonly, copy, nonatomic) NSString *transactionDataFilename;
@property (readonly, copy, nonatomic) NSString *transactionDataHash;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
