@class NSMutableDictionary, SGMITokenCounts;

@interface SGMINaiveBayesModel : NSObject

@property (readonly) SGMITokenCounts *mailCount;
@property (readonly) SGMITokenCounts *unigramTokenCounts;
@property (readonly) SGMITokenCounts *bigramTokenCounts;
@property (readonly) NSMutableDictionary *unigramTokensCount;
@property (readonly) NSMutableDictionary *bigramTokensCount;

- (id)init;
- (void).cxx_destruct;
- (void)ingestUnigramTokens:(id)a0 bigramTokens:(id)a1 asSalient:(BOOL)a2;
- (id)initWithMailCount:(id)a0 unigramTokenCounts:(id)a1 bigramTokenCounts:(id)a2 unigramTokensCount:(id)a3 bigramTokensCount:(id)a4;

@end
