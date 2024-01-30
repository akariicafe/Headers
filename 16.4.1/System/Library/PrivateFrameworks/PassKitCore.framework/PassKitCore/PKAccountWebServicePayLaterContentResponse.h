@class PKPayLaterDynamicContent, NSArray;

@interface PKAccountWebServicePayLaterContentResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) PKPayLaterDynamicContent *dynamicContent;
@property (readonly, copy, nonatomic) NSArray *reportIssueTopics;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
