@class NSArray, PKAccount;

@interface PKPaginatedAccountWebServiceFinancingPlansResponse : PKPaginatedAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *financingPlans;
@property (readonly, nonatomic) PKAccount *account;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
