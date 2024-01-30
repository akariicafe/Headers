@class NSData, NSString;

@interface PKAccountWebServiceStatementActionResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSData *statementPDFData;
@property (readonly, copy, nonatomic) NSString *statementDataFilename;
@property (readonly, copy, nonatomic) NSString *statementDataHash;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
