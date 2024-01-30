@class QSSSpan, NSString, NSArray;

@interface QSSMutableBatchTranslationResponse_TranslatedSentence : QSSBatchTranslationResponse_TranslatedSentence

@property (copy, nonatomic) QSSSpan *source_span;
@property (copy, nonatomic) NSString *engine_input;
@property (copy, nonatomic) QSSSpan *target_span;
@property (copy, nonatomic) NSArray *n_best_choices;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
