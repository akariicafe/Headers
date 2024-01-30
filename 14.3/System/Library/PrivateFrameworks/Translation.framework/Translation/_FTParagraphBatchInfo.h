@class _LTTranslationParagraph, FTMutableBatchTranslationRequest_Paragraph;

@interface _FTParagraphBatchInfo : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) _LTTranslationParagraph *paragraph;
@property (retain, nonatomic) FTMutableBatchTranslationRequest_Paragraph *requestParagraph;

- (void).cxx_destruct;

@end
