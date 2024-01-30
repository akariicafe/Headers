@class REContentRanker;

@interface REMLSentimentAnalyzer : NSObject <NSCopying> {
    REContentRanker *_contentRanker;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithContentRanker:(id)a0;
- (id)sentimentForText:(id)a0;
- (id)sentimentForTokens:(id)a0;

@end
