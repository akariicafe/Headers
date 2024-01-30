@interface StocksUI.ArticleErrorMessageFactoryProvider : NSObject <NUErrorMessageFactory> {
    void /* unknown type, empty encoding */ reachability;
}

- (id)errorMessageForArticleView;
- (id)errorMessageForArticleViewWithOfflineReason:(long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
