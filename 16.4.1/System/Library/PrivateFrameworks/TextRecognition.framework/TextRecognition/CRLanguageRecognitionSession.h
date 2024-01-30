@class CRLanguageRecognitionContext, NLLanguageRecognizer;

@interface CRLanguageRecognitionSession : NSObject <CRTextDecodingLanguageRecognitionSession>

@property (retain) CRLanguageRecognitionContext *latinLanguageRecognitionContext;
@property (retain) NLLanguageRecognizer *languageRecognizer;

- (id)init;
- (void).cxx_destruct;
- (void)completeSession;
- (void)processFeature:(id)a0 context:(id)a1;

@end
