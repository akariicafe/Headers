@interface StocksUI.ArticleErrorMessageFactoryProvider : NSObject <NUErrorMessageFactory> {
    void /* unknown type, empty encoding */ reachability;
}

- (id)errorMessageForArticleView;
- (id)errorMessageForArticleViewWithOfflineReason:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
