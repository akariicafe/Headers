@class FCReadingList, FCReadingHistory, NSString, FCSubscriptionList;
@protocol NUURLHandling, NUArticleActivityOptionsProvider;

@interface NUArticleActivityManagerFactory : NSObject <NUArticleActivityFactory>

@property (readonly, nonatomic) FCReadingHistory *readingHistory;
@property (readonly, nonatomic) FCReadingList *readingList;
@property (readonly, nonatomic) FCSubscriptionList *subscriptionList;
@property (readonly, nonatomic) id<NUURLHandling> URLHandler;
@property (readonly, nonatomic) id<NUArticleActivityOptionsProvider> optionsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityProviderForHeadline:(id)a0 reportConcernViewPresenter:(id)a1 URLModifier:(id)a2;
- (id)initWithReadingHistory:(id)a0 readingList:(id)a1 subscriptionList:(id)a2 URLHandler:(id)a3 optionsProvider:(id)a4;

@end
