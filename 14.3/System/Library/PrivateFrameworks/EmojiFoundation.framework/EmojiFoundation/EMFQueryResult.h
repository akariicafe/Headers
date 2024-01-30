@class EMFQuery, NSArray, NSDictionary, EMFQueryResultOverride;

@interface EMFQueryResult : NSObject

@property (readonly, nonatomic) EMFQuery *query;
@property (readonly, nonatomic) NSArray *matches;
@property (readonly, nonatomic) NSDictionary *matchingDocumentWeights;
@property (readonly, copy, nonatomic) EMFQueryResultOverride *resultOverride;

+ (id)_emojiStringForDocumentID:(id)a0 usingLocaleData:(struct __EmojiLocaleDataWrapper { } *)a1;

- (void).cxx_destruct;
- (id)description;
- (id)emojiMatchesAndDocumentWeightsUsingEmojiLocaleData:(struct __EmojiLocaleDataWrapper { } *)a0;
- (id)emojiMatchesForOverriddenResultsUsingEmojiLocaleData:(struct __EmojiLocaleDataWrapper { } *)a0;
- (id)initWithQuery:(id)a0 matchingDocumentWeights:(id)a1 resultOverride:(id)a2;
- (BOOL)_matchingDocumentWeightsContainsOnlyBlackLivesMatterResults;
- (id)_handleOverrideResultInterpolationForStandardResults:(id)a0;
- (id)_interpolateOverriddenResultsByPrepending:(id)a0;
- (id)_interpolateOverriddenResultsByAppending:(id)a0;
- (id)_interpolateOverriddenResultsByAppendingAndMoving:(id)a0;
- (id)_interpolateOverriddenResultsByFiltering:(id)a0;
- (id)_interpolateOverriddenResultsByOverwriting;
- (id)initWithQuery:(id)a0 andMatchingDocumentWeights:(id)a1;
- (id)emojiMatchesUsingEmojiLocaleData:(const struct __EmojiLocaleDataWrapper { } *)a0;

@end
