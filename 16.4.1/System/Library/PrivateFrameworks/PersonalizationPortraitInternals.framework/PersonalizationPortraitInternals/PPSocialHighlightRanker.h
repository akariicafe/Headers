@class NSObject;
@protocol PPSocialHighlightScorer;

@interface PPSocialHighlightRanker : NSObject {
    NSObject<PPSocialHighlightScorer> *_firstPassScorer;
    NSObject<PPSocialHighlightScorer> *_topKScorer;
    unsigned int _topKCount;
}

- (id)initWithFirstPassScorer:(id)a0 topKScorer:(id)a1 topKCount:(unsigned int)a2;
- (id)rerankSocialHighlightsForTopOneResult:(id)a0 client:(id)a1;
- (id)rankSocialHighlights:(id)a0 client:(id)a1 performRerank:(BOOL)a2;
- (id)init;
- (void).cxx_destruct;

@end
