@class SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse;

@interface CDMMentionResolverResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse *response;

- (id)initWithResponse:(id)a0;
- (void).cxx_destruct;
- (id)initWithMentions:(id)a0;

@end
