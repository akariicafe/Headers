@class NSString, CDMTokenChain;

@interface CDMEmbeddingRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) CDMTokenChain *tokenChain;

- (void).cxx_destruct;
- (id)commandName;
- (id)initWithTokenChain:(id)a0 text:(id)a1;

@end
