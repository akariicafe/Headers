@interface NewsArticles.MessagePresenter : NSObject <SXMessagePresenter>

- (id)init;
- (BOOL)canPresentMessage;
- (void)presentMessage:(id)a0;

@end
