@class NSData, NSString;

@interface PKAccountWebServiceStatementActionResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSData *statementPDFData;
@property (readonly, copy, nonatomic) NSString *statementDataFilename;
@property (readonly, copy, nonatomic) NSString *statementDataHash;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
