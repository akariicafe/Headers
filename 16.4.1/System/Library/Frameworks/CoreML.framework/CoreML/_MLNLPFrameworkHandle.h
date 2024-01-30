@interface _MLNLPFrameworkHandle : NSObject

@property (readonly, nonatomic) void /* function */ *NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl;
@property (readonly, nonatomic) void /* function */ *NLPSequenceModelCreateWithDataImpl;
@property (readonly, nonatomic) void /* function */ *NLPSequenceModelGetRevisionImpl;
@property (readonly, nonatomic) void /* function */ *NLPSequenceModelIsRevisionSupportedImpl;
@property (readonly, nonatomic) void /* function */ *NLPSequenceModelGetCurrentRevisionImpl;
@property (readonly, nonatomic) void /* function */ *NLPClassifierModelCopyPredictedLabelForTextImpl;
@property (readonly, nonatomic) void /* function */ *NLPClassifierModelCreateWithDataImpl;
@property (readonly, nonatomic) void /* function */ *NLPClassifierModelGetRevisionImpl;
@property (readonly, nonatomic) void /* function */ *NLPClassifierModelIsRevisionSupportedImpl;
@property (readonly, nonatomic) void /* function */ *NLPClassifierModelGetCurrentRevisionImpl;
@property (readonly, nonatomic) void /* function */ *NLPGazetteerModelCopyLabelForStringImpl;
@property (readonly, nonatomic) void /* function */ *NLPGazetteerModelCreateWithDataImpl;
@property (readonly, nonatomic) void /* function */ *NLPGazetteerModelGetRevisionImpl;
@property (readonly, nonatomic) void /* function */ *NLPGazetteerModelIsRevisionSupportedImpl;
@property (readonly, nonatomic) void /* function */ *NLPGazetteerModelGetCurrentRevisionImpl;
@property (readonly, nonatomic) void /* function */ *NLPEmbeddingModelCopyVectorForStringImpl;
@property (readonly, nonatomic) void /* function */ *NLPEmbeddingModelCreateWithDataImpl;
@property (readonly, nonatomic) void /* function */ *NLPEmbeddingModelGetRevisionImpl;
@property (readonly, nonatomic) void /* function */ *NLPEmbeddingModelIsRevisionSupportedImpl;
@property (readonly, nonatomic) void /* function */ *NLPEmbeddingModelGetCurrentRevisionImpl;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)sharedHandle;

- (id)init;
- (id)predictTokensLabelsLocationsLengthsForString:(void *)a0 inputString:(id)a1 error:(id *)a2;
- (const void *)initializeEmbeddingModelWithData:(id)a0 error:(id *)a1;
- (const void *)initializeGazetteerModelWithData:(id)a0 error:(id *)a1;
- (const void *)initializeSentenceClassifierModelWithData:(id)a0 error:(id *)a1;
- (const void *)initializeWordTaggingModelWithData:(id)a0 error:(id *)a1;
- (id)predictLabelForWordString:(void *)a0 inputString:(id)a1 error:(id *)a2;
- (id)predictLabelsForSentenceString:(void *)a0 inputString:(id)a1 error:(id *)a2;
- (id)predictVectorForString:(void *)a0 inputString:(id)a1 error:(id *)a2;

@end
