@class NSString, INFSentenceContext, INFSentenceToken;

@interface INFSentenceTokenWithContext : NSObject

@property (nonatomic, getter=isResolved) BOOL resolved;
@property (copy, nonatomic) NSString *placeholderName;
@property (retain, nonatomic) INFSentenceContext *context;
@property (retain, nonatomic) INFSentenceToken *originalToken;

+ (id)sentenceResolvedTokenWithOriginalToken:(id)a0 placeholderName:(id)a1;

- (void).cxx_destruct;
- (id)initWithToken:(id)a0 variableName:(id)a1;

@end
