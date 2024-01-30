@class NLv4EmbeddingTensor, NSString, NSArray, NSObject, CDMTokenChain;
@protocol SIRINLUSystemDialogAct;

@interface CDMUaaPNLRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) CDMTokenChain *tokenChain;
@property (readonly, nonatomic) NLv4EmbeddingTensor *embeddingTensor;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSObject<SIRINLUSystemDialogAct> *lastSystemDialogActOrNil;
@property (retain, nonatomic) NSArray *matchingSpans;

- (void).cxx_destruct;
- (id)commandName;
- (id)initWithTokenChain:(id)a0 embeddingTensor:(id)a1 matchingSpans:(id)a2 requestId:(id)a3 lastSystemDialogAct:(id)a4;

@end
