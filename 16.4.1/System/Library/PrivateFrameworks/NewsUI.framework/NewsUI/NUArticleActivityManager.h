@class FCReadingList, FCReadingHistory, NSString, FCSubscriptionList;
@protocol NUURLHandling, NUURLModifying, NUArticleActivityOptionsProvider, FCHeadlineProviding, NUReportConcernViewPresenter;

@interface NUArticleActivityManager : NSObject <NUActivityProvider>

@property (readonly, nonatomic) FCReadingHistory *readingHistory;
@property (readonly, nonatomic) FCReadingList *readingList;
@property (readonly, nonatomic) FCSubscriptionList *subscriptionList;
@property (readonly, nonatomic) id<NUURLHandling> URLHandler;
@property (readonly, nonatomic) id<NUReportConcernViewPresenter> reportConcernViewPresenter;
@property (readonly, nonatomic) id<NUURLModifying> URLModifier;
@property (readonly, nonatomic) id<NUArticleActivityOptionsProvider> optionsProvider;
@property (readonly, nonatomic) id<FCHeadlineProviding> headline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activities;
- (void).cxx_destruct;
- (id)activityItemSources;
- (id)initWithHeadline:(id)a0 readingHistory:(id)a1 readingList:(id)a2 subscriptionList:(id)a3 URLHandler:(id)a4 reportConcernViewPresenter:(id)a5 URLModifier:(id)a6 optionsProvider:(id)a7;
- (id)activityForType:(unsigned long long)a0;
- (id)activityImageForHeadline:(id)a0 withType:(unsigned long long)a1;
- (id)activityTitleForHeadline:(id)a0 withType:(unsigned long long)a1;
- (id)activityTypeForHeadline:(id)a0 withType:(unsigned long long)a1;
- (BOOL)articleDislikedForHeadline:(id)a0;
- (BOOL)articleLikedForHeadline:(id)a0;
- (BOOL)articleSavedForHeadline:(id)a0;
- (BOOL)channelMutedForHeadline:(id)a0;
- (id /* block */)performBlockForHeadline:(id)a0 withType:(unsigned long long)a1;
- (id)supportedActivities;
- (void)toggleArticleDislikeStatusForHeadline:(id)a0;
- (void)toggleArticleLikeStatusForHeadline:(id)a0;
- (void)toggleMuteForHeadline:(id)a0;
- (void)toggleSaveForHeadline:(id)a0;

@end
